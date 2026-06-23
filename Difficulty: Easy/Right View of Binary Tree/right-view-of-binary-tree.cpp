#include <vector>

using namespace std;

class Solution {
    void rView(Node* root, int level, vector<int>& ans) {
        if (root == nullptr) return;
        
        if (level == ans.size()) {
            ans.push_back(root->data);
        }
        
        rView(root->right, level + 1, ans);
        rView(root->left, level + 1, ans);
    }
    
public:
    vector<int> rightView(Node* root) {
        vector<int> ans;
        rView(root, 0, ans);
        return ans;
    }
};