//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        int n = arr.size() ;
        vector<vector<int>>result;
        for(int i=0;i<n;i++){
            vector<int>subarray;
            for(int j = i ;j<n;j++){
                subarray.push_back(arr[j]);
                result.push_back(subarray);
            }
        }
        return result;
    }
};


//{ Driver Code Starts.

int main() {

    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<vector<int> > result = ob.getSubArrays(arr);
        int c1 = 0;
        int c2 = 0;
        cout << "[";
        for (const auto& subarray : result) {
            cout << "[";
            c2 = 0;
            for (int num : subarray) {
                c2++;
                if (c2 != subarray.size())
                    cout << num << ",";
                else
                    cout << num << "";
            }
            c1++;
            if (c1 != result.size())
                cout << "], ";
            else
                cout << "]";
        }
        cout << "]" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends