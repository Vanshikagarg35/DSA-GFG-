/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* node) {
        // code here
        vector<int>ans;
        stack<Node*>st;
        st.push(node);
        while(!st.empty()){
            Node *temp = st.top();
            ans.push_back(temp->data);
            st.pop();
            if(temp->left!=NULL){
                st.push(temp->left);
                
            }
            if(temp->right!=NULL){
                st.push(temp->right);
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};