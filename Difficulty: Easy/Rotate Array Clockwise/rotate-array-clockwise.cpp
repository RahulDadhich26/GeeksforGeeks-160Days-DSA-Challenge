class Solution {
  public:
    void rotateclockwise(vector<int>& nums, int k) {
        // code here
        int n = nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        
    }
};
