class Solution {
  public:
    int height(Node* root) {
        queue<Node*> q;
        int count = 0;
        
        if (root != nullptr) {
            q.push(root);
        } else {
            return -1;
        }
        
        while (!q.empty()) {
            int size = q.size();
            
            for (int i = 0; i < size; i++) {
                Node* temp = q.front();
                q.pop();
                
                if (temp->left != nullptr) {
                    q.push(temp->left);
                }
                if (temp->right != nullptr) {
                    q.push(temp->right);
                }
            }
            
            count++;
        }
        
        return count-1;
    }
};