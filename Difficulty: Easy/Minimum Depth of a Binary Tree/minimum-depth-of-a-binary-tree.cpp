/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        // Your code here
         if(root == NULL) return 0;

        int lh = minDepth(root->left);
        int rh = minDepth(root->right);
        if(lh == 0) return 1 + rh;
        if(rh == 0) return 1 + lh;
        return 1 + min(lh,rh); 
    }
};