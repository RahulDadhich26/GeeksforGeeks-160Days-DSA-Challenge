//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &nums, int k) {
      unordered_map<int, int> sumCount; // {cumulative sum: frequency}
    sumCount[0] = 1; // Base case: one way to have a sum of 0
    int currentSum = 0, count = 0;

    for (int num : nums) {
        currentSum += num;

        // Check if there's a subarray that ends here and sums to k
        if (sumCount.find(currentSum - k) != sumCount.end()) {
            count += sumCount[currentSum - k];
        }

        // Update the frequency of the current cumulative sum
        sumCount[currentSum]++;
    }

    return count;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends