//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int orangesRotting(vector<vector<int>>& mat) {
         int res=0,cnt=0;
        
        int n=mat.size();
        int m=mat[0].size();
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==2){
                    q.push({i,j});
                }
                
                if(mat[i][j]==1){
                    cnt++;
                }
            }
        }
        
        if(cnt==0) return 0;
        
        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,-1,1};
        
        while(!q.empty() && cnt>0){
            res++;
            int sz = q.size();
            for(int k=0;k<sz;k++){
            auto it = q.front();
            int i = it.first;
            int j = it.second;
            q.pop();
            
            for(int a =0;a<4;a++){
                int x = i + dx[a];
                int y = j + dy[a];
                
                if(x>=0 && x<n && y>=0 && y<m && mat[x][y]==1){
                    mat[x][y]=2;
                    cnt--;
                    q.push({x,y});
                }
            }
            
            }
            
        }
        
        if(cnt>0) return -1;
        
        return res;
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        int ans = obj.orangesRotting(mat);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends