//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        int orignal = n, reverse = 0, last_digit;

    while(n > 0){
        last_digit = n % 10;
        reverse = (reverse * 10) + last_digit;
        n = n / 10;
    }

    if(reverse == orignal){
        return true;
    }else{
        return false;
            }
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        bool ans = ob.isPalindrome(n);
        cout << (ans ? "true" : "false") << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends