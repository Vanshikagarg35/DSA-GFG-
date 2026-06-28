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

    Node* construct(vector<int>& inorder, vector<int>& preorder, int inStart, int inEnd, int& index) {
        if (inStart > inEnd) {
            return nullptr;
        }

        Node* root = new Node(preorder[index]);
        
        int pos = findPosition(inorder, preorder[index], inStart, inEnd);
        
        index++; 

        root->left = construct(inorder, preorder, inStart, pos - 1, index);
        root->right = construct(inorder, preorder, pos + 1, inEnd, index);

        return root;
    }

    Node* buildTree(vector<int>& inorder, vector<int>& preorder) {
        int preIndex = 0;
        return construct(inorder, preorder, 0, inorder.size() - 1, preIndex);
    }
};