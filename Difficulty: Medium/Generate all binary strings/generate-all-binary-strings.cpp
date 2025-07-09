// User function Template for C++

class Solution {
  public:
   
   void f(string s, int num , vector<string>&ans){
       
       if(s.size() == num){
           ans.push_back(s);
           return;
       }
       
       f(s + '0', num,ans);
       if(s.empty() || s.back() != '1'){
           f(s + '1',num,ans);
       }
   }
  
    vector<string> generateBinaryStrings(int num) {
        vector<string> ans;
        f( "" , num ,ans);
        return ans;
    }
};