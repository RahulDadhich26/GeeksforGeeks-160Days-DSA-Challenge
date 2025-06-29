class Solution {
  public:
    string reverse(const string& s) {
        stack<int>st;
        string S = "";
        for(auto it : s){
            st.push(it);
        }
        
        while(!st.empty()){
            char top = st.top();
            S += top;
            st.pop();
        }
        return S;
    }
};