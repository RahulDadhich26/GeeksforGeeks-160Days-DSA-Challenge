/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

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
    Node *nextRight(Node *root, int key) {
         queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            vector<Node*>v;
            int s = q.size();
            for(int i =0;i<s;i++){
                Node* front = q.front();
                q.pop();
                v.push_back(front);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            for(int i = 0;i<v.size();i++){
                if(v[i]->data==key && i<v.size()-1){
                    return v[i+1];
                }
            }
        }
        return new Node(-1);
    }
};