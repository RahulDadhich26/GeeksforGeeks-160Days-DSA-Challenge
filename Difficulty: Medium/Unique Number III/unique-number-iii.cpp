//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int getSingle(vector<int> &arr) {
       int result = 0;
        // iterate through each bit (0 to 31 for 32-bit integers)
        for (int i = 0; i < 32; ++i) {
            int sum = 0;
            int mask = (1 << i);
            
            for (int num : arr) {
                if (num & mask) {
                    sum += 1;
                }
            }
            // If the sum is not a multiple of 3, it means the unique number has a '1' at this bit
            if (sum % 3 != 0) {
                result |= mask;
            }
        }
    return result; 
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
        Solution ob;
        int ans = ob.getSingle(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends