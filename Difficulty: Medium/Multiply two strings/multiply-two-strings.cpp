//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    /*You are required to complete below function */
    string multiplyStrings(string& s1, string& s2) {
         int sign1 = 1, sign2 = 1;
    if (s1[0] == '-') {
        sign1 = -1;
        s1.erase(0, 1);
    }
    if (s2[0] == '-') {
        sign2 = -1;
        s2.erase(0, 1);
    }
    int final_sign = sign1 * sign2;
    
    // Remove leading zeros
    s1.erase(0, s1.find_first_not_of('0'));
    s2.erase(0, s2.find_first_not_of('0'));
    
    // Handle case where one of the numbers is zero
    if (s1.empty() || s2.empty()) {
        return "0";
    }
    
    int len1 = s1.size();
    int len2 = s2.size();
    vector<int> result(len1 + len2, 0);
    
    // Multiply each digit and add to the result array
    for (int i = len1 - 1; i >= 0; --i) {
        int digit1 = s1[i] - '0';
        for (int j = len2 - 1; j >= 0; --j) {
            int digit2 = s2[j] - '0';
            int product = digit1 * digit2;
            int pos = i + j + 1;
            int total = product + result[pos];
            result[pos] = total % 10;
            result[pos - 1] += total / 10;
        }
    }
    
    // Convert the result array to a string, skipping leading zeros
    int start = 0;
    while (start < result.size() && result[start] == 0) {
        start++;
    }
    
    if (start == result.size()) {
        return "0";
    }
    
    string result_str;
    for (int i = start; i < result.size(); ++i) {
        result_str += to_string(result[i]);
    }
    
    // Add the sign if necessary
    if (final_sign == -1) {
        result_str = "-" + result_str;
    }
    
    return result_str;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string a;
        string b;
        cin >> a >> b;
        Solution obj;
        cout << obj.multiplyStrings(a, b) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends