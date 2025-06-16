class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int s = 0, e = 0;  
    vector<int> res;

    int curr = 0;
    for (int i = 0; i < arr.size(); i++) {
        curr += arr[i];

        // If current sum becomes more or equal,
        // set end and try adjusting start
        if (curr >= target) {
            e = i;

            // While current sum is greater, 
          	// remove starting elements of current window
            while (curr > target && s < e) {
                curr -= arr[s];
                ++s;
            }

            // If we found a subraay
            if (curr == target) {
                res.push_back(s + 1);
                res.push_back(e + 1);
                return res;
            }
        }
    }
	// If no subarray is found
    return {-1};
}
    
};