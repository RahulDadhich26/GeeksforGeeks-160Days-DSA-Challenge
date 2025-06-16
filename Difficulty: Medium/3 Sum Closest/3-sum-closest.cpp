// User function Template for C++

class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
         int n = arr.size();
  	sort(arr.begin(), arr.end());
    int res = 0;
    int minDiff = INT_MAX;
	
    for (int i = 0; i < n - 2; i++) {
      
        // Initialize the left and right pointers
      	int l = i + 1, r = n - 1;

        while (l < r) {
            int currSum = arr[i] + arr[l] + arr[r];
          
          	// If |currSum - target| < minDiff, then we have 
            // found a triplet which is closer to target
            if (abs(currSum - target) < minDiff) {
                minDiff = abs(currSum - target);
                res = currSum;
            }
            // If multiple sums are closest, take maximum one
            else if(abs(currSum - target) == minDiff) {
            	res = max(res, currSum);
            }
			
          	// If currSum > target then we will decrease the 
            // right pointer to move closer to target
            if (currSum > target)
                r--;
          
          	// If currSum >= target then we will increase the 
            // left pointer to move closer to target
            else
                l++;
        }
    }

    return res;
    }
};
  