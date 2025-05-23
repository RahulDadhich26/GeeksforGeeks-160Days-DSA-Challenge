// User function Template for C++

class Solution {
  public:
    void modifyArray(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]!= -1 && arr[i] < arr.size() && arr[i] != arr[arr[i]]){
                swap(arr[i],arr[arr[i]]);
            }
            else {
                i++;
            }
        }
    }
};
