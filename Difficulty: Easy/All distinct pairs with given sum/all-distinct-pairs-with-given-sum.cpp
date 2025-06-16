// User function Template for C++
class Solution {
  public:
    vector<vector<int>> distinctPairs(vector<int> &arr, int target) {
         vector<vector<int>> res;
    int n = arr.size();

  	sort(arr.begin(), arr.end());
  
    int left = 0;
    int right = n - 1;

    while (left < right) {

        // Skip Duplicates
        if (left > 0 && arr[left] == arr[left - 1]) {
            left++;
            continue;
        }
        if (right < n - 1 && arr[right] == arr[right + 1]) {
            right--;
            continue;
        }

        // Check if sum equals the target
        if (arr[left] + arr[right] == target) {
            res.push_back({arr[left], arr[right]});
            left++;
            right--;
        }
        else if (arr[left] + arr[right] > target)
            right--;
        else
            left++;
    }

    return res;
    }
};