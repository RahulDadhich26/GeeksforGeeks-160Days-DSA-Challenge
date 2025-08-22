class Solution {
  public:
    int helper(vector<int>& arr, int k){
        unordered_map<int,int>mpp;
        int l=0, r=0 , maxcnt= 0;
        while(r < arr.size()){
            mpp[arr[r]]++;
            
            while(mpp.size() > k){
                mpp[arr[l]]--;
                if(mpp[arr[l]] == 0) mpp.erase(arr[l]);
                l++;
            }
            maxcnt += (r - l + 1);
            r++;
        }
        return maxcnt;
    }
    int exactlyK(vector<int> &arr, int k) {
        // code here
       return helper(arr,k) - helper(arr,k-1);
    }
};