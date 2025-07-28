class Solution {
  public:
    int MinimumEffort(int n, int m, vector<vector<int>> &heights) {
        priority_queue< pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;
        
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0] = 0;
        pq.push({0, {0, 0}});
        
        int dx[] = {0, 0, -1, 1};
        int dy[] = {-1, 1, 0, 0};
        
        while(!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            
            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;
            
            if(row == n - 1 && col == m - 1) return diff;
            
            for(int i = 0; i < 4; i++) {
                int newr = row + dx[i];
                int newc = col + dy[i];
                
                if(newr >= 0 && newc >= 0 && newr < n && newc < m) {
                    int neweffort = max(abs(heights[row][col] - heights[newr][newc]), diff);
                    
                    if(neweffort < dist[newr][newc]) {
                        dist[newr][newc] = neweffort;
                        pq.push({neweffort, {newr, newc}});
                    }
                }
            }
        }
        return 0;
    }
};