class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
    vector<vector<pair<int,int>>> adj(n+1);
    
        for(auto &it:edges){
            int u = it[0];
            int v = it[1];
            int w = it[2];
            
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<int>dist(n+1,1e9), parent(n+1);
        
        for(int i = 0 ;i<=n;i++) parent[i] = i;
        vector<int>vis(n+1,0);
        
        dist[1] = 0;
        pq.push({0,1});
        
        while(!pq.empty()){
            auto it = pq.top();
            int dis = it.first;
            int node = it.second;
            pq.pop();
            
            if(vis[node])  continue;
            vis[node] = 1;
            
            for(auto &it : adj[node]){
                int adjnode = it.first;
                int edW = it.second;
                if(dis + edW < dist[adjnode]){
                    dist[adjnode] = dis + edW;
                    pq.push({dist[adjnode],adjnode});
                    parent[adjnode] = node;
                }
            }
        }
        
        if(dist[n] == 1e9) return {-1};
        vector<int>path;
        
        int node = n;
        while(parent[node] != node){
            path.push_back(node);
            node = parent[node];
        }
        path.push_back(1);
        path.push_back(dist[n]);
        reverse(path.begin(),path.end());
        return path;
    }
};