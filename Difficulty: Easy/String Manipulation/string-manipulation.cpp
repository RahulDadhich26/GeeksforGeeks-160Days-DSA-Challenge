// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector
    <string>& arr) {
        // Your code goes here
         stack<string> stk;

    // Traverse the array
    for (string &word : arr) {
        
        // If stack is not empty and top element 
        // is same as current
        if (!stk.empty() && stk.top() == word) {
            stk.pop(); 
        } else {
            
            // Push if no consecutive duplicate
            stk.push(word); 
        }
    }
    
    return stk.size();
    }
};