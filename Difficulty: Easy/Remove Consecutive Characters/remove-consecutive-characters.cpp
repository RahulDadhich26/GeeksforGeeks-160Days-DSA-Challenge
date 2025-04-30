//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        string result = "";
        for(int i=0;i<s.length();i++){
            if(result.empty() || result.back()!=s[i]) result+=s[i];
        }
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsecutiveCharacter(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends