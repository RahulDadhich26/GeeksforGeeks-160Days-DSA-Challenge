//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int fun(int i, int take, int &n, vector<int> &a, vector<vector<int>> &dp){
        if(i>=n || (i==n-1 && take))
            return 0;
        
        if(dp[i][take] != -1)
            return dp[i][take];
        
        int t = 0;
        if(i==0)
            t= a[i] + fun(i+2, 1, n, a, dp);
        else
            t = a[i] + fun(i+2, take, n, a, dp);
        
        int nt = fun(i+1, take, n, a, dp);
        
        return dp[i][take] = max(t, nt);
        
    }
    int maxValue(vector<int>& arr) {
           int n = arr.size();
        vector<vector<int>> dp(n+1, vector<int>(2,-1));
        
        return fun(0, 0, n, arr, dp);
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        int res;
        res = ob.maxValue(arr);
        cout << res << "\n"
             << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends