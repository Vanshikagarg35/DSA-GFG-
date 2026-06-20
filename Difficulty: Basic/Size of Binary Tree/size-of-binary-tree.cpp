/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int getSize(Node* root) {
        queue<Node*>q;
        int count = 0;
        if(root!=NULL){
            q.push(root);
            count++;
        }
        else{
            return -1;
        }
        while(!q.empty()){
            Node *temp = q.front();
            q.pop();
            Node *left = temp->left;
            if(left!=NULL){
                count++;
                q.push(left);
            }
            Node *right = temp->right;
            if(right!=NULL){
                count++;
                q.push(right);
            }
            
        }
   
        return count;

        
    }
};