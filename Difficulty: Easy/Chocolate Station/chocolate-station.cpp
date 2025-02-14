//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getChocolateCost(vector<int> arr, int price) {
         int ans=0;
        int MAXIMUM=INT_MIN;
        for(int i=0;i<arr.size();i++){
            MAXIMUM=max(MAXIMUM,arr[i]);
        }
        ans=MAXIMUM*price;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int price;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> price;
        cin.ignore(); // Ignore the newline character after price

        Solution ob;
        cout << ob.getChocolateCost(arr, price) << "\n";
    }
    return 0;
}

// } Driver Code Ends