/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        unordered_set<Node* >st;
        Node* temp = head;
        int count = 0;
        while(temp!=NULL){
            if(st.count(temp)){
                Node* startPoint = temp;
                temp = temp->next;
                while(temp!=startPoint){
                    temp = temp->next;
                    count++;
                }
                return count+1;
            }
            st.insert(temp);
            temp = temp->next;
        }
        return count;
    }
};