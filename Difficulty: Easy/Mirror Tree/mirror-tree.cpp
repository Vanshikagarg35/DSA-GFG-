class Solution {
  public:
    void mirror(Node* root) {
        if (root == nullptr) {
            return;
        }
        
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            Node* temp = q.front();
            q.pop();
            
            swap(temp->left, temp->right);
            
            if (temp->left != nullptr) {
                q.push(temp->left);
            }
            if (temp->right != nullptr) {
                q.push(temp->right);
            }
        }
    }
};