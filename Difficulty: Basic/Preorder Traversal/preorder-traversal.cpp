class Solution {
    void traverse(Node* root, vector<int>& ans) {
        if (root == nullptr) {
            return;
        }
        
        ans.push_back(root->data);
        traverse(root->left, ans);
        traverse(root->right, ans);
    }

public:
    vector<int> preOrder(Node* root) {
        vector<int> ans;
        traverse(root, ans);
        return ans;
    }
};