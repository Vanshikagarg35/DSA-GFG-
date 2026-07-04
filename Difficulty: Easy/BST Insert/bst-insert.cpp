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
    Node* insert(Node* root, int key) {
        if(!root){
            Node *temp = new Node(key);
            return temp;
        }
        if(root->data>key){
            root->left = insert(root->left ,key );
        }
        else{
            root->right = insert(root->right , key);
        }
        return root;
        
    }
};