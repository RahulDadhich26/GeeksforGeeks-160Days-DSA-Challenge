//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size() ;
        if(m > n) return -1;
        if(n == 0 || m == 0) return 0;
        
        sort(a.begin(),a.end());
        int mini = INT_MAX;
        for(int i=0;i+m-1<n;i++){
            int ans = a[i+m-1] - a[i];
            mini = min(mini,ans);
        }
        return mini;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        int m;
        cin >> m;
        cin.ignore();
        Solution ob;
        cout << ob.findMinDiff(arr, m) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends