//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
            priority_queue<pair<int,vector<int>>>heap;
            
            for(const auto& point : points){
                int x = point[0];
                int y = point[1];
                
                int dis = x * x + y * y;
                if(heap.size() < k){
                    heap.push({dis , point});
                }
                else{
                    if(dis < heap.top().first){
                        heap.pop();
                        heap.push({dis , point});
                    }
                }
                
            }  
            vector<vector<int>>result;
                while(!heap.empty()){
                    result.push_back(heap.top().second);
                    heap.pop();
            }
                
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends