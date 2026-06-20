/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
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
            if(left==NULL && right==NULL){
                count++;
            }
            
        }
   
        return count;
    }
};