class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
          int n = arr.size();
    
    // Fix the first element as arr[i] 
    for (int i = 0; i < n - 2; i++) {
      
        // Fix the second element as arr[j] 
        for (int j = i + 1; j < n - 1; j++) {
            
            // Now look for the third number 
            for (int k = j + 1; k < n; k++) { 
                if (arr[i] + arr[j] + arr[k] == target)
                    return true; 
            } 
        } 
    } 

    // If we reach here, then no triplet was found 
    return false; 
    }
};