/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
  public:
     vector<int>arr;
  vector<int>leaf;
  void inorder(Node*root){
      if(root==NULL){
          return;
      }
      inorder(root->left);
      arr.push_back(root->data);
      if(root->left==NULL && root->right==NULL){
          leaf.push_back(root->data);
      }
      inorder(root->right);
  }
    bool isDeadEnd(Node *root) {
        arr={0};
        inorder(root);
        int j=0;
        for(int i=1;i<arr.size() && j<leaf.size();i++){
            if(arr[i]==leaf[j]){
                if(arr[i-1]==leaf[j]-1 && arr[i+1]==leaf[j]+1){
                    return true;
                }
                j++;
            }
        }
        return false;
    }
};