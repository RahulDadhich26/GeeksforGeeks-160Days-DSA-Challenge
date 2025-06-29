// User function Template for C++

class Solution {
  public:
     queue<int>q;
    void Reverse(stack<int> &St) {
        if(!St.empty()) {
            q.push(St.top());
            St.pop();
        }
        else{
            return;
        }
        Reverse(St);
        
        while(!q.empty()){
            St.push(q.front());
            q.pop();
        }
    }
};