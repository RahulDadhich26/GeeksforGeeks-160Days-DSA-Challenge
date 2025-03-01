//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
     stack<char> st;
    for (char ch : s) {
        if (ch != ']') {
            st.push(ch);
        } else {
            string temp = "";
            while (!st.empty() && st.top() != '[') {
                temp = st.top() + temp;
                st.pop();
            }
            st.pop(); // Remove the '[' from the stack

            string numStr = "";
            while (!st.empty() && isdigit(st.top())) {
                numStr = st.top() + numStr;
                st.pop();
            }
            int num = numStr.empty() ? 1 : stoi(numStr);

            string repeated = "";
            for (int i = 0; i < num; ++i) {
                repeated += temp;
            }

            for (char c : repeated) {
                st.push(c);
            }
        }
    }

    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
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
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends