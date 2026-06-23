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
    void find(Node* root, int pos , int &l, int &r){
        if(!root) return;
        l = min(pos , l);
        r = max(pos ,r);
        find(root->left , pos-1 , l ,r);
        find(root->right , pos+1 , l , r);
    }
    vector<int> bottomView(Node *root) {
        int l=0;
        int r=0;
        find(root , 0 ,l, r );
        vector<int>ans(r-l+1);
        vector<int>level(r-l+1 , INT_MIN);
        Bview(root , -1*l ,ans ,level , 0);
        return ans;
        
    }
    void Bview(Node* root, int pos , vector<int>& ans, vector<int>& level , int l){
        if(!root) return;
        if(level[pos]<=l){
            ans[pos] = root->data;
            level[pos] = l;
        }
        Bview(root->left , pos-1 , ans , level ,l+1);
        Bview(root->right , pos+1, ans , level, l+1);
    }

        
    
};