//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int> res; 
    int m = a.size();
    int n = b.size();
  
    // This is similar to merge of merge sort
    int i = 0, j = 0;    
    while(i < m && j < n) {
      
        // Skip duplicate elements in the first array
        if(i > 0 && a[i - 1] == a[i]) {
            i++;
            continue;
        }
      
        // Skip the smaller
        if(a[i] < b[j]) {
            i++;
        }
        else if(a[i] > b[j]) {
            j++;
        }
      
        // If equal, add to result and move both 
        else {
            res.push_back(a[i]);
            i++;
            j++;
        }
    }
    return res; 
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.intersection(a, b);
        if (ans.size() == 0) {
            cout << "[]" << endl;
            cout << "~" << endl;
            continue;
        }
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends