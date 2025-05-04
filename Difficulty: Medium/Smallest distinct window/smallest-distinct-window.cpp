//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& s) {
        // code here
         if (s.empty()) return 0;

    // Step 1: Find the number of distinct characters (k)
    unordered_set<char> distinct_chars;
    for (char c : s) {
        distinct_chars.insert(c);
    }
    int k = distinct_chars.size();

    // Step 2: Sliding Window to find the smallest window with all k distinct chars
    unordered_map<char, int> window_counts;
    int left = 0;
    int min_len = INT_MAX;
    int unique_in_window = 0;

    for (int right = 0; right < s.size(); ++right) {
        char current_char = s[right];

        // Expand the window by including current_char
        if (window_counts[current_char] == 0) {
            unique_in_window++;
        }
        window_counts[current_char]++;

        // Contract the window from the left if possible
        while (unique_in_window == k) {
            // Update the minimum window length
            int current_window_len = right - left + 1;
            if (current_window_len < min_len) {
                min_len = current_window_len;
            }

            // Move left to try to reduce the window size
            char left_char = s[left];
            window_counts[left_char]--;
            if (window_counts[left_char] == 0) {
                unique_in_window--;
            }
            left++;
        }
    }

    return min_len;
    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends