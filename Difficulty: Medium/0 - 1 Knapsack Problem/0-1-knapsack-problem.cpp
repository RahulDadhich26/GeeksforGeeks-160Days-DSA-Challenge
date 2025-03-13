//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   int solve(int W, vector<int>& val, vector<int>& wt, int n, int i, vector<vector<int>>& memo) {
    // Base case: No more items or no capacity left
    if (i >= n || W <= 0) {
        return 0;
    }

    // If the result is already computed, return it
    if (memo[i][W] != -1) {
        return memo[i][W];
    }

    // If the current item's weight exceeds the remaining capacity, skip it
    if (wt[i] > W) {
        memo[i][W] = solve(W, val, wt, n, i + 1, memo);
    } else {
        // Two choices: Include the current item or exclude it
        int include = val[i] + solve(W - wt[i], val, wt, n, i + 1, memo); // Include the item
        int exclude = solve(W, val, wt, n, i + 1, memo); // Exclude the item
        memo[i][W] = max(include, exclude); // Store the maximum value
    }

    return memo[i][W];
}

int knapsack(int W, vector<int>& val, vector<int>& wt) {
    int n = wt.size();

    // Memoization table initialized with -1
    vector<vector<int>> memo(n + 1, vector<int>(W + 1, -1));

    // Start from the first item (index 0)
    return solve(W, val, wt, n, 0, memo);
}
};


//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapsack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends