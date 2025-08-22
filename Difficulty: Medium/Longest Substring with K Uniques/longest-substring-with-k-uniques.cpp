class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n = s.length();
        unordered_map<char,int>fq;
       int l=0, mx=-1;
       
       for(int r=0;r<n; r++){
           fq[s[r]]++;
           
           if(fq.size()>k){
               fq[s[l]]--;
               if(fq[s[l]]==0) fq.erase(s[l]);
               l++;
           }
           
           if(fq.size()==k){
               mx= max(mx, r-l+1);
           }
           
       }
       return mx;
    }
};