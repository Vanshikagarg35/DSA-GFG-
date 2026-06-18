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
    
    void reverseQueue(queue<int> &q) {
        Node *head ;
        head = NULL;
        while(!q.empty()){
            if(head == NULL){
                head = new Node(q.front());
                q.pop();
            }
            else{
                Node *temp = new Node(q.front());
                temp->next = head;
                head = temp;
                q.pop();
            }
        }
        Node *curr = head;
        while(curr!= NULL){
            q.push(curr->data);
            curr=curr->next;
            
        }
        // code here
        
    }
};