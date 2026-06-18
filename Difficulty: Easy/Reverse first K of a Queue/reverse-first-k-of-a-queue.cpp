class Node{
    public:
        int data;
        Node *next;
        Node(int value){
            data = value;
            next = NULL;
        }
};
class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(q.size()<k) return q;
        int dupk = k;
        Node *head = NULL;
        while(!q.empty() && dupk>0){
            if(head== NULL){
                head = new Node(q.front());
                q.pop();
                dupk--;
            }
            else{
                Node *temp = new Node(q.front());
                temp->next = head;
                head = temp;
                q.pop();
                dupk--;
            }
            
        }
        Node *curr = head;
        while(curr!=NULL){
            q.push(curr->data);
            curr= curr->next;
        }
        int left = q.size()-k;
        
        while(left>0){
            int elem = q.front();
            q.pop();
            q.push(elem);
            left--;
            
        }
        return q;
        
    }
};