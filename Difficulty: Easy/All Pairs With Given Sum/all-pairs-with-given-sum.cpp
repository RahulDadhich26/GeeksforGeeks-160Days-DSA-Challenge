// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findAllPairs(vector<int> &arr, int target) {
        vector<vector<int>>result;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i] + arr[j] == target){
                    result.push_back({i,j});
                }
            }
        }
        return result;
    }
};