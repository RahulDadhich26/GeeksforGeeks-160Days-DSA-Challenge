class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        if(s1.length() != s2.length()) return false;
        
        unordered_map<char,int>mpp;
        
        for(int i = 0 ;i < s1.size() ;i++){
            char ch = s1[i];
            mpp[ch]++;
        }
        for(int i =0 ; i < s2.length();i++){
            char ch = s2[i];
            if(mpp[ch] > 0){
                mpp[ch]--;
            }
        }
        
        int count = 0;
        for(auto it = mpp.begin() ; it != mpp.end() ;it++){
            count += it->second;
        }
        if( count > k) return false;
        return true;
    }
};