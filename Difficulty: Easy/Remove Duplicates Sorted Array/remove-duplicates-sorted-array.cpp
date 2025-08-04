class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
      unordered_set<int> s; 
  
    // To maintain the new size of the array
    int idx = 0;  

    for (int i = 0; i < arr.size(); i++) {
        if (s.find(arr[i]) == s.end()) { 
            s.insert(arr[i]);  
            arr[idx++] = arr[i];  
        }
    }
 
    // Return the size of the array 
    // with unique elements
    arr.resize(idx);
    return arr;
    }
};