// function Template for C++

class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        stack<int>st;
        while(!q.empty()){
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()){
            int top = st.top();
            q.push(top);
            st.pop();
        }
        return q;
    }
};