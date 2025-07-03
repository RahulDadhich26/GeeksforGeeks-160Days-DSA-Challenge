class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& nums, int k) {
          vector<int> result;
        priority_queue<pair<int, int>> pq; // {value, index}
        
        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});
            
            // Remove elements outside current window
            while (!pq.empty() && pq.top().second < i - k + 1) {
                pq.pop();
            }
            
            // Add maximum to result when window is complete
            if (i >= k - 1) {
                result.push_back(pq.top().first);
            }
        }
        return result;
    }
};