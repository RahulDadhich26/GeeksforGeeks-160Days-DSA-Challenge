class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int maxlen = 0;
        int left = 0;
        
        for(int right = 0; right < arr.size() ; right++){
            
            if(arr[right] == 0) k--;
            
            while(k < 0){
                if(arr[left] == 0){
                    k++;
                }
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};
