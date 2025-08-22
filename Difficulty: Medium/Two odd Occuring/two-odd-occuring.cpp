class Solution {
public:
    vector<int> twoOddNum(vector<int>& arr) {
        // XOR all elements to get XOR of the two odd occurring numbers
        int xorAll = 0;
        for (int num : arr) {
            xorAll ^= num;
        }
        
        // Find the rightmost set bit in xorAll
        int rightmostSetBit = xorAll & (-xorAll);
        
        // Divide elements into two groups and XOR separately
        int first = 0, second = 0;
        for (int num : arr) {
            if (num & rightmostSetBit) {
                first ^= num;
            } else {
                second ^= num;
            }
        }
        
        // Return in decreasing order
        if (first > second) {
            return {first, second};
        } else {
            return {second, first};
        }
    }
};