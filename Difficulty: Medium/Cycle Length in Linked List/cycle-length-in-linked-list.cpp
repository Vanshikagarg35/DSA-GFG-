class Solution {
public:
    int lengthOfLoop(Node *head) {
        unordered_map<Node*, int> mp;
        Node* temp = head;

        while(temp != NULL){
            mp[temp]++;

            if(mp[temp] == 3) break;

            temp = temp->next;
        }

        int count = 0;
        for(auto it : mp){
            if(it.second == 2 || it.second == 3) count++; 
        }

        return count;
    }
};