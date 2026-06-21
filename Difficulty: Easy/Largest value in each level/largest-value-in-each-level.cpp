class Solution {
  public:
    vector<int> largestValues(Node* root) {
        vector<int> ans;
        
        if (root == nullptr) {
            return ans;
        }
        
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int size = q.size();
            int max_val = INT_MIN;
            
            for (int i = 0; i < size; i++) {
                Node* temp = q.front();
                q.pop();
                
                max_val = max(max_val, temp->data);
                
                if (temp->left != nullptr) {
                    q.push(temp->left);
                }
                if (temp->right != nullptr) {
                    q.push(temp->right);
                }
            }
            
            ans.push_back(max_val);
        }
        
        return ans;
    }
};