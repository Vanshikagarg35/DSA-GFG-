class Solution {
public:
    int findPosition(vector<int>& inorder, int target, int start, int end) {
        for (int i = start; i <= end; i++) {
            if (inorder[i] == target) {
                return i;
            }
        }
        return -1;
    }

    Node* construct(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int& index) {
        if (inStart > inEnd) {
            return nullptr;
        }

        Node* root = new Node(postorder[index]);
        
        int pos = findPosition(inorder, postorder[index], inStart, inEnd);
        
        index--; 

        root->right = construct(inorder, postorder, pos + 1, inEnd, index);
        root->left = construct(inorder, postorder, inStart, pos - 1, index);

        return root;
    }

    Node* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex = postorder.size() - 1;
        return construct(inorder, postorder, 0, inorder.size() - 1, postIndex);
    }
};