// Return true if s is binary, else false
class Solution {
  public:
    bool isBinary(string& s) {
        bool result = true;
        for(int i = 0; i<s.size(); i++){
            if(s[i] != '0' && s[i] != '1'){
                result = false;
                break;
            }
        }
        return result; 
    }
};