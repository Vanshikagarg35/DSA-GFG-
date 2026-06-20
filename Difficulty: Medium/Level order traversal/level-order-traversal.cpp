/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        queue<Node*>q;
        vector<int>ans;
        if(root!=NULL){
            q.push(root);
            ans.push_back(root->data);
        }
        else{
            return ans;
        }
        while(!q.empty()){
            Node *temp = q.front();
            q.pop();
            Node *left = temp->left;
            if(left!=NULL){
                ans.push_back(left->data);
                q.push(left);
            }
            Node *right = temp->right;
            if(right!=NULL){
                ans.push_back(right->data);
                q.push(right);
            }
            
        }
        return ans;
        

        
    }
};