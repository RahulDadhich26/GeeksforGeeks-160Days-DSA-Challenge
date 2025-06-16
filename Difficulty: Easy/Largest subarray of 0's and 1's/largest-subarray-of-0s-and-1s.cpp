class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
         unordered_map<int, int> mp;

    int preSum = 0; 
    int res = 0; 
  
    // Traverse through the given array
    for (int i = 0; i < arr.size(); i++) {
      
        // Add current element to sum
      	// if current element is zero, add -1
        preSum += (arr[i] == 0) ? -1 : 1;

        // To handle sum = 0 at last index
        if (preSum == 0) 
            res = i + 1;

        // If this sum is seen before, then update 
      	// result with maximum
        if (mp.find(preSum) != mp.end())
            res = max(res, i - mp[preSum]);
        
		// Else put this sum in hash table
        else 
            mp[preSum] = i;
    }

    return res;
    }
};