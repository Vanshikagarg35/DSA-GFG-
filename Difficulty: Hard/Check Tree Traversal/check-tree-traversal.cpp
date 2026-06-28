struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

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

    Node* construct(vector<int>& preorder, vector<int>& inorder, int inStart, int inEnd, int& index, int n) {
        if (inStart > inEnd || index >= n) {
            return nullptr;
        }

        int pos = findPosition(inorder, preorder[index], inStart, inEnd);
        
        if (pos == -1) {
            return nullptr; 
        }

        Node* root = new Node(preorder[index]);
        index++;

        root->left = construct(preorder, inorder, inStart, pos - 1, index, n);
        root->right = construct(preorder, inorder, pos + 1, inEnd, index, n);

        return root;
    }

    void getPostOrder(Node* root, vector<int>& post) {
        if (root == nullptr) {
            return;
        }
        getPostOrder(root->left, post);
        getPostOrder(root->right, post);
        post.push_back(root->data);
    }

    bool checktree(vector<int>& preorder, vector<int>& inorder, vector<int>& postorder) {
        int n = preorder.size();
        if (n == 0) {
            return true;
        }
        
        int index = 0;
        Node* root = construct(preorder, inorder, 0, n - 1, index, n);

        vector<int> generatedPostorder;
        getPostOrder(root, generatedPostorder);

        if (generatedPostorder.size() != n) {
            return false;
        }

        for (int i = 0; i < n; i++) {
            if (generatedPostorder[i] != postorder[i]) {
                return false;
            }
        }

        return true;
    }
};