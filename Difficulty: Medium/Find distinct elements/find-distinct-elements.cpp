// User function Template for C++

class Solution {
  public:
    int distinct(vector<vector<int>> M, int N) {
        vector<int> ans ;
        unordered_map<int, int> freq ; //Hashmap 
        unordered_set<int> set; //set
        for(int i=0; i<N; i++){
              for(int j=0; j<N; j++){
                  set.insert(M[i][j]);
              }
                for(auto k:set){
                      freq[k]++ ;
                }
                set.clear();
        }
        for(auto p:freq){
            if(p.second==N){
                ans.push_back(p.first);
            }
        }
          return ans.size();     
    }
};