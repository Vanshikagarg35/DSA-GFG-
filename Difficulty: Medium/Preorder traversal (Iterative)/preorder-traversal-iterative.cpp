/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        stack<Node* >st;
        vector<int>ans;
        st.push(root);
        while(!st.empty()){
            Node* temp = st.top();
            ans.push_back(temp->data);
            st.pop();
            if(temp->right!=NULL){
                st.push(temp->right);
            }
            if(temp->left!=NULL){
                st.push(temp->left);
            }
        }
        return ans;
    }
};