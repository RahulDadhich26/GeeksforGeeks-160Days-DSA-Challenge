/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        queue<pair<Node*,int>>q;
        // first->Node and second->node
        q.push({root,0});
        map<int,int>mpp;
        // code , node->val
        while(!q.empty()){
            Node *x = q.front().first;  // node // root
            int code = q.front().second; // code. // value
            q.pop();
            if(mpp.find(code) == mpp.end()){ // not found
                mpp[code] = x->data;
            }
            if(x->left) q.push({x->left,code-1});
            if(x->right) q.push({x->right,code+1});
            
        }
        vector<int>ans;
        for(auto it : mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};