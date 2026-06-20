/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isIdentical(Node* r1, Node* r2) {
        vector<int>ans1;
        vector<int>ans2;
        queue<Node *>q1;
        queue<Node *>q2;
        if(r1!= NULL && r2!=NULL){
            q1.push(r1);
            q2.push(r2);
            ans1.push_back(r1->data);
            ans2.push_back(r2->data);
        }
        else{
            return false;
        }
        while(!q1.empty()){
            int size = q1.size();
            for(int i =0; i<q1.size(); i++){
                Node* temp =  q1.front();
                q1.pop();
                Node* left = temp->left;
                if(left!=NULL){
                    q1.push(left);
                    ans1.push_back(left->data);
                    
                }
                else{
                    ans1.push_back('NULL');
                    
                }
                Node* right = temp->right;
                if(right!=NULL){
                    q1.push(right);
                    ans1.push_back(right->data);
                }
                else{
                    ans1.push_back('NULL');
                }
            }
        }
        while(!q2.empty()){
            int size = q2.size();
            for(int i =0; i<q2.size(); i++){
                Node* temp =  q2.front();
                q2.pop();
                Node* left = temp->left;
                if(left!=NULL){
                    q2.push(left);
                    ans2.push_back(left->data);
                    
                }
                else{
                    ans2.push_back('NULL');
                    
                }
                Node* right = temp->right;
                if(right!=NULL){
                    q2.push(right);
                    ans2.push_back(right->data);
                }
                else{
                    ans2.push_back('NULL');
                }
            }
        }
        return ans1 == ans2;
        
    }
};