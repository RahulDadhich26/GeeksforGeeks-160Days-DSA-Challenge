// User function Template for C++
class Solution {
  public:

    // Function to remove a character from the given position
    string removeCharacter(string &s, int pos) {
        // code here
        if (pos < 0 || pos >= s.length()) {
        return s;
    }
    s.erase(pos, 1);
    return s;
    }
};