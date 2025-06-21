// User function template for C++

class Solution {
  public:
    // Function to check if a string is Pangram or not.
    bool checkPangram(string& s) {
        for(char ch = 'a'; ch <= 'z'; ch++) {
    	bool found = false;
        
        for(int i = 0; i < s.length(); i++) {
        	if(ch == tolower(s[i])) {
            	found = true;
                break;
            }
        }
      
        if(found == false)
            return false;
    }
    return true;
    }
};