class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        int n = s.length();
        int count = 0;
        
        // Array to store the last seen index of characters 'a', 'b', 'c'
        // lastSeen[0] = last index of 'a'
        // lastSeen[1] = last index of 'b' 
        // lastSeen[2] = last index of 'c'
        vector<int> lastSeen(3, -1);
        
        // Iterate through each character in the string
        for (int i = 0; i < n; i++) {
            // Update the last seen index of current character
            lastSeen[s[i] - 'a'] = i;
            
            // Check if we have seen all three characters at least once
            // If any character hasn't been seen yet, its lastSeen value will be -1
            if (lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1) {
                // Find the minimum index among all three characters
                // This represents the leftmost position where we have all three chars
                int minIndex = min({lastSeen[0], lastSeen[1], lastSeen[2]});
                
                // All substrings ending at current position 'i' and starting from
                // any position from 0 to minIndex will contain all three characters
                // So we add (minIndex + 1) to our count
                count += (minIndex + 1);
            }
        }
        
        return count;
    }
};