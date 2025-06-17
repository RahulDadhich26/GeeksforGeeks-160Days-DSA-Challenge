class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int left_max = 0;
        int right_max = 0;
        int water = 0;
        int l=0,r=arr.size()-1;
        while(l < r){
            left_max = max(left_max,arr[l]);
            right_max = max(right_max,arr[r]);
            
            if(left_max < right_max){
                water += left_max - arr[l];
                l++;
            }
            else {
                water += right_max - arr[r];
                r--;
            }
        }
        return water;
    }
};