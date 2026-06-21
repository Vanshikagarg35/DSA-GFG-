class Solution {
public:
    bool isCousins(Node* root, int x, int y) {
        if (root == nullptr || x==y) {
            return false;
        }

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> currentLevel;

            for (int i = 0; i < size; i++) {
                Node* temp = q.front();
                q.pop();

                Node* left = temp->left;
                Node* right = temp->right;

                if (left != nullptr && right != nullptr) {
                    if ((left->data == x && right->data == y) || 
                        (left->data == y && right->data == x)) {
                        return false; 
                    }
                }

                if (left != nullptr) {
                    q.push(left);
                    currentLevel.push_back(left->data);
                }

                if (right != nullptr) {
                    q.push(right);
                    currentLevel.push_back(right->data);
                }
            }

            bool foundX = find(currentLevel.begin(), currentLevel.end(), x) != currentLevel.end();
            bool foundY = find(currentLevel.begin(), currentLevel.end(), y) != currentLevel.end();

            if (foundX && foundY) {
                return true;
            }
        }

        return false;
    }
};