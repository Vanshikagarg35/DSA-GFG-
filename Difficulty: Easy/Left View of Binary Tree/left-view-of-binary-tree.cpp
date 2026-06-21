/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
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
                if(i==0) ans.push_back(q.front()->data);
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

        }
        
        return ans;
    }
};