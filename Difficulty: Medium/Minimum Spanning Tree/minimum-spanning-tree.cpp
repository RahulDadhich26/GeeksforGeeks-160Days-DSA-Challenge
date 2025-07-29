class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> edges[]) {
         vector<vector<pair<int,int>>>adj(V);
        for(int i=0;i<V;i++){
        for(auto it:edges[i]){
            int v=it[0];
            int wt=it[1];
            adj[i].push_back({v,wt});
        }}
        
        int sum=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>visit(V,0);
        //{wt,node}
        pq.push({0,0});
        
        while(!pq.empty()){
            auto t=pq.top();
            pq.pop();
            int wt=t.first;
            int node=t.second;
            if(visit[node]) continue;
            visit[node]=1;
            sum+=wt;
            for(auto it:adj[node]){
                if(!visit[it.first]){
                pq.push({it.second,it.first});
                }
            }
        }
        return sum;
    }
};