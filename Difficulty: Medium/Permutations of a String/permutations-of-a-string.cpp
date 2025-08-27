class Solution {
  public:
     void solve(string &s, set<string> &st,int i){
      
      if(i==s.size()){
          st.insert(s);
          return;
      }
      
      for(int start=i;start<s.size();start++){
          swap(s[start],s[i]);
          solve(s,st,i+1);
          swap(s[start],s[i]);
      }
  }
    vector<string> findPermutation(string &s) {
        vector<string> ans;
        set<string> st;
        solve(s,st,0);
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};
