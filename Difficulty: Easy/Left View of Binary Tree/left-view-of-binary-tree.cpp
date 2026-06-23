#include <vector>

using namespace std;

class Solution {
    void lView(Node* root, int level, vector<int>& ans) {
        if (root == nullptr) return;
        
        if (level == ans.size()) {
            ans.push_back(root->data);
        }
        
        lView(root->left, level + 1, ans);
        lView(root->right, level + 1, ans);
    }
    
public:
    vector<int> leftView(Node* root) {
        vector<int> ans;
        lView(root, 0, ans);
        return ans;
    }
};