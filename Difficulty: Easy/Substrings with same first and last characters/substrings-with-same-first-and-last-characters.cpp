//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countSubstring(string &s) {
      int freq[26] = {0};
      
      
      for(char c : s){
          freq[c - 'a']++;
      }
      int total = 0;
      for(int i=0;i<26;i++){
          int f = freq[i];
          total += (f * (f - 1) / 2) + f;
      }
      return total;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.countSubstring(str) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends