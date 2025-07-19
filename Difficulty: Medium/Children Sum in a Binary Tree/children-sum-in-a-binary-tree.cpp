/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    bool helper(Node* &root){
        if(!root) return true;
        
        if(!root->left && !root->right) return true;
        
        int leftsum = root->left ? root->left->data : 0;
        int rightsum = root->right ? root->right->data : 0;
        
        if(root->data != leftsum + rightsum) return false;
        
        return helper(root->left) && helper(root->right);
    }
    int isSumProperty(Node *root) {
        return helper(root);
    }
};