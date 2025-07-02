/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution {
  public:
    // Function to return list containing elements of right view of binary tree.
    void Rview(Node* root, int level, vector<int>&ans)
    {
    if(!root)
    return;
    
    if(level == ans.size())
    ans.push_back(root->data);
    
    Rview(root->right, level+1, ans);
    
    Rview(root->left, level+1, ans);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here  vector<int>ans;
        vector<int>ans;
        if(root==NULL)
        return ans;
        
        Rview(root, 0, ans);
        
        return ans;
    }
};