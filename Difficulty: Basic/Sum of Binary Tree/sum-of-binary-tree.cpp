/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        queue<Node*>q;
        int count = 0;
        if(root!=NULL){
            q.push(root);
            count=count+(root->data);
        }
        else{
            return -1;
        }
        while(!q.empty()){
            Node *temp = q.front();
            q.pop();
            Node *left = temp->left;
            if(left!=NULL){
                count+=(left->data);
                q.push(left);
            }
            Node *right = temp->right;
            if(right!=NULL){
                count+=(right->data);
                q.push(right);
            }
            
        }
   
        return count;
    }
};