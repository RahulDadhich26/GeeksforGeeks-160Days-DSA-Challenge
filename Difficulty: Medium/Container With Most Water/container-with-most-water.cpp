class Solution {
  public:
    int maxWater(vector<int> &h) {
        int maxwater = 0;
        int left = 0;
        int right = h.size()-1;
        
        while(left < right){
            int currentwater = (right - left) * min(h[left],h[right]);
            maxwater = max(maxwater, currentwater);
            
            if(h[left] < h[right]){
                left++;
            }
            else right--;
        }
        return maxwater;
        
    }
};