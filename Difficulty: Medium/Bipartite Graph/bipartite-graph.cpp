class Solution {
  public:
        bool dfs(int u, int c,vector<int>&clr,vector<vector<int>> &adj ){
      clr[u] = c;
      
      for(int v: adj[u]){
          if(clr[v]==-1){
              if(!dfs(v,1-c, clr, adj)) return false;
          } else if(clr[u]==clr[v]){
              return false;
          }
      }
      return true;
  }
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        int n=V;
        vector<int>clr(n,-1);
        vector<vector<int>>adj(n);
        for(auto &i: edges){
            int u=i[0], v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for(int i=0;i<n;i++){
            if(clr[i]==-1){
                if(!dfs(i, 0,clr, adj)) return false;
            }
        }
        
        return true;
    }
};