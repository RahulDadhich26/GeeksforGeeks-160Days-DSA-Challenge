//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//Back-end complete function Template for C++

class Solution {
  public:
    int helper(int index, vector<int>&cost, vector<int>&dp){
        if(index == cost.size()) return 0;
        int ans = INT_MAX;
        if(dp[index]!=-1) return dp[index];
        if(index + 1 <= cost.size()){
            ans = min(ans, cost[index] + helper(index + 1 , cost, dp));
        }
        if(index + 2 <= cost.size()){
            ans = min(ans , cost[index] + helper(index + 2, cost, dp));
        }
        return dp[index] = ans;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        int ans = min(helper(0,cost,dp),helper(1,cost,dp));
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution sln;
        int res = sln.minCostClimbingStairs(arr);
        cout << res << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends