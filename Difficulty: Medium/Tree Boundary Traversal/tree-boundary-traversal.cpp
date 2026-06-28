class Solution {
public:
    void leftBoundary(Node* root, vector<int>& ans) {
        if (!root) return;
        if (!root->left && !root->right) return;
        
        ans.push_back(root->data);
        
        if (root->left) {
            leftBoundary(root->left, ans);
        } else {
            leftBoundary(root->right, ans);
        }
    }
    
    void leafNodes(Node* root, vector<int>& ans) {
        if (!root) return;
        if (!root->left && !root->right) {
            ans.push_back(root->data);
            return;
        }
        
        leafNodes(root->left, ans);
        leafNodes(root->right, ans);
    }
    
    void rightBoundary(Node* root, vector<int>& ans) {
        if (!root) return;
        if (!root->left && !root->right) return;
        
        if (root->right) {
            rightBoundary(root->right, ans);
        } else {
            rightBoundary(root->left, ans);
        }
        
        ans.push_back(root->data);
    }

    vector<int> boundaryTraversal(Node *root) {
        vector<int> ans;
        if (!root) return ans;
        
        ans.push_back(root->data);
        
        if (root->left || root->right) {
            leftBoundary(root->left, ans);
            leafNodes(root, ans);
            rightBoundary(root->right, ans);
        }
        
        return ans;
    }
};