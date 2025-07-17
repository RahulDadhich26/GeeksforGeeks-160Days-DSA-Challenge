/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    int findMax(Node *root) {
        if(!root) return 0;
        while(root->right){
            root = root->right;
        }
       int min = root->data;
        
        return min;
    }

    int findMin(Node *root) {
        if(!root) return 0;
        if(!root) return 0;
        while(root->left){
            root = root->left;
        }
        int min = root->data;
        
        return min;
    }
};