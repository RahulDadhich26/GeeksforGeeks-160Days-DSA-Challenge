
class Solution {
  public:
    bool isSubSequence(string A, string B) {
        int m = A.size();
        int n = B.size();
        
        if(m > n) return false;
        
        int i = 0, j = 0;
        while(i < m && j < n){
            if(A[i] == B[j]){
                i++;
            }
            j++;
        }
        return i == m;
    }
};