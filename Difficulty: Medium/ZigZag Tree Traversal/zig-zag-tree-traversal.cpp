/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        queue<Node *>q;
        vector<int>ans;
        //vector<int>templevel;
        int count=1;
        if(root!=NULL){
            q.push(root);
            ans.push_back(root->data);
            count++;
        } 
        else{
            return ans;
        }
        while(!q.empty()){
            int size = q.size();
            vector<int>templevel;
            for(int i=0; i<size; i++){
                Node* temp = q.front();
                q.pop();
        
                Node* left = temp->left;
                if(left!=NULL){
                    q.push(left);
                    templevel.push_back(left->data);
                }
                
                Node* right = temp->right;
                if(right!=NULL){
                    q.push(right);
                    templevel.push_back(right->data);
                }
            }
            
            if(count%2==0){
                reverse(templevel.begin(), templevel.end());
                ans.insert(ans.end(),templevel.begin(), templevel.end());
            }
            else{
                ans.insert(ans.end(),templevel.begin(),templevel.end());
            }
            count++;
                
            
            
        }
        return ans;
    }
};