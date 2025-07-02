/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
         queue<pair<Node*, int>> q;
        q.push({root, 0});
         map<int, vector<int>> mp;
        while(!q.empty()) {
            Node* node = q.front().first;
            int Hd = q.front().second;
            q.pop();
            
            mp[Hd].push_back(node->data);
            
            if(node->left) q.push({node->left, Hd - 1});
            if(node->right) q.push({node->right, Hd + 1});
        }
        
        vector<vector<int>> ans;
        for(auto p : mp) {
            ans.push_back(p.second);
        }
        
        return ans;
    }
};