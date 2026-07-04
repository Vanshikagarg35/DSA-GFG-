/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* delNode(Node* root, int x) {
        if (!root) {
            return NULL;
        }
        
        if (root->data > x) {
            root->left = delNode(root->left, x);
        } else if (root->data < x) {
            root->right = delNode(root->right, x);
        } else {
            if (!root->left && !root->right) {
                delete root;
                return NULL;
            }
            else if (!root->right) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            else if (!root->left) {
                Node* temp = root->right;
                delete root;
                return temp;
            }
            else {
                Node* child = root->left;
                Node* parent = root;
                
                while (child->right) {
                    parent = child;
                    child = child->right;
                }
                
                if (parent != root) {
                    parent->right = child->left;
                    child->left = root->left;
                    child->right = root->right;
                } else {
                    child->right = root->right;
                }
                
                delete root;
                return child;
            }
        }
        return root;
    }
};