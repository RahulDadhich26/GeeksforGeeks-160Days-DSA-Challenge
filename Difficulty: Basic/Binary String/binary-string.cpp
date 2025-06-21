
class Solution {
  public:
    // Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string str) {
int m = 0; // Count of 1's in input string

    // Traverse input string and count of 1's in it
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1')
            m++;
    }

    // Return count of possible pairs among m 1's
    return m * (m - 1) / 2;
    }
};