/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        // Code here
        queue<Node*>q;
        int count = 0;
        if(root!=NULL){
            q.push(root);
           
        }
        else{
            return -1;
        }
        while(!q.empty()){
            Node *temp = q.front();
            q.pop();
            Node *left = temp->left;
            if(left!=NULL){
                q.push(left);
     
            }
            Node *right = temp->right;
            if(right!=NULL){
                q.push(right);
             
            }
            if(left!=NULL || right!=NULL){
                count++;
            }
            
        }
        return count;
    }
};