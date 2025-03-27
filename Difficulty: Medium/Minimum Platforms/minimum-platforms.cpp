//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
     sort(arr.begin(),arr.end());
     sort(dep.begin(),dep.end());
    
    int platforms_needed = 1; // At least one platform is needed
    int max_platforms = 1;
    int i = 1; // Pointer for arrival array
    int j = 0; // Pointer for departure array
    
    while (i < arr.size() && j < dep.size()) {
        if (arr[i] <= dep[j]) {
            platforms_needed++;
            i++;
            if (platforms_needed > max_platforms) {
                max_platforms = platforms_needed;
            }
        } else {
            platforms_needed--;
            j++;
        }
    }
    
    return max_platforms;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, dep;
        string input;

        // Read first array (arr)
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Read second array (dep)
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            dep.push_back(number);
        }

        // Assuming Solution class is defined elsewhere with a method findPlatform
        Solution ob;
        cout << ob.findPlatform(arr, dep);

        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends