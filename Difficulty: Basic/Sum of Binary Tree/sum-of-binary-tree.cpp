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
    void sumfunc(Node* root, int &sum){
        if(root ==NULL) return;
        sum= sum+root->data;
        sumfunc(root->left , sum);
        sumfunc(root->right , sum);
    }
    int sumBT(Node* root) {
        // code here
        int sum = 0;
        sumfunc(root , sum);
        return sum;
    }
};