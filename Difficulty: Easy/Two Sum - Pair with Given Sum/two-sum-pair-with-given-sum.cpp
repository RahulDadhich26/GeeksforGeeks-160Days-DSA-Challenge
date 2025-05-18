//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(), arr.end());

    int left = 0, right = arr.size() - 1;

    // Iterate while left pointer is less than right
    while (left < right){
        int sum = arr[left] + arr[right];

        // Check if the sum matches the target
        if (sum == target)
            return true;
        else if (sum < target)
            left++; // Move left pointer to the right
        else
            right--; // Move right pointer to the left
    }
    // If no pair is found
    return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.twoSum(arr, x);
        cout << (ans ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends