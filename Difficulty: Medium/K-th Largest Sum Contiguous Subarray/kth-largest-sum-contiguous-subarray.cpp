//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        vector<int>SubarraySum;
        int n = arr.size();
        
        for(int start = 0;start<n;start++){
            int sum =0 ;
            for(int end = start; end<n;end++){
                sum += arr[end];
                SubarraySum.push_back(sum);
            }
        }
        sort(SubarraySum.begin(),SubarraySum.end(),greater<int>());
        return SubarraySum[k-1];
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        int res = obj.kthLargest(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends