// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int minnumber = arr[0];
        int minIndex = 0;
        for(int i=0;i<arr.size();i++){
            if(minnumber > arr[i]){ minnumber = arr[i]; minIndex = i;}
        }
        return minIndex;
    }
};
