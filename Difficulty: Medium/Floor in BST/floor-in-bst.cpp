// Function to search a node in BST.
class Solution {

  public:
    int floor(Node* root, int input) {
        int F = -1;
    
    while(root!=nullptr){
        if(root->data == input){
            return root->data;
        }
        else if(root->data > input){
            root = root->left;
        }
        else {
            F = root->data;
            root = root->right;
        }
    }
    return F;
    }
};