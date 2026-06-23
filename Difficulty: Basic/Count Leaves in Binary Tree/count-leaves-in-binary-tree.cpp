class Solution {
public:
    int countLeaves(Node* root) {
        if (root == nullptr) {
            return 0;
        }
        
        if (root->left == nullptr && root->right == nullptr) {
            return 1;
        }
        
        int leftLeaves = countLeaves(root->left);
        int rightLeaves = countLeaves(root->right);
        
        return leftLeaves + rightLeaves;
    }
};