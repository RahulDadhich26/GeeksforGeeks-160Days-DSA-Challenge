// User function Template for C++

class Solution {
  public:
    // Function to convert the given string to Camel Case
    string convertToCamelCase(string& s) {
         string result = "";
         bool cap = false;

    for (int i = 0; i < s.length(); i++) {
        // If space, set flag to capitalize next character
        if (s[i] == ' ') {
            cap= true;
            continue;
        }
        if (cap == true) {
                result += toupper(s[i]);
                cap = false;
            }
        else {
                result += s[i];
            }
        }
    return result;
    }
};
