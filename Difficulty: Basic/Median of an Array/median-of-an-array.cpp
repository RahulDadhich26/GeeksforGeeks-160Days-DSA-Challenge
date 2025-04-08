//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    double findMedian(vector<int> &arr) {
        int n  = arr.size() ;
        sort(arr.begin(),arr.end());
        return n % 2 == 0 ? (arr[n/2] + arr[(n/2)-1])/2.0 : arr[n/2];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findMedian(arr) << endl;
    }
}

// } Driver Code Ends