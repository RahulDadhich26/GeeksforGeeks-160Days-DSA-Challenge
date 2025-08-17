// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        int l = 0 , r = arr.size() - 1;
        priority_queue<int> pq;

        for(int i=l; i<k; i++){
            pq.push(arr[i]);
        }


        for(int i=k; i<=r; i++){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }

        return pq.top();
    } 
};