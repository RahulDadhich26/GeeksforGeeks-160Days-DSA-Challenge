
// User function Template for C++

class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        int n = arr.size();
        vector<int>prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i + 1] = prefix[i] + arr[i];  
        }
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int start = 0;start<n;start++){
            for(int end = start; end<n;end++){
               int sum = prefix[end + 1] - prefix[start];
               if(pq.size() < k) pq.push(sum);
               else if(sum > pq.top()) {
                   pq.pop();
                   pq.push(sum);
               }
            }
        }
        return pq.top();
    }
};

