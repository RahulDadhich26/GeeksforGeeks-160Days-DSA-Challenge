class Solution {
  public:
      
    bool detectcycle(int node,int parent,vector<int>adj[],vector<bool>visited){
        visited[node]=1;
        for(int i=0;i<adj[node].size();i++){
            //below is 3 condition:-1.if our next node is our parent node that means it was not cycle so we have to continue,2.if next node is not visited yet then go and visit,3.we have to check for all next node and for that we use recursion
            if(parent==adj[node][i]){//if next node is parent node that means there is no cycle so we have to continue
                continue;
            }
            if(visited[adj[node][i]]==1)//mark visited to that node 
            return 1;
            if(detectcycle(adj[node][i],node,adj,visited))//we check for all next node using recursion of any one of that is cycle we return 1
            return 1;
        }
        return 0;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<int> adj[V];
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]); // build adjacency list
        }

        vector<bool> visited(V, false);
        for (int i = 0; i < V; ++i) {//this are for disconnected graph it check all component are visited or not
            if (!visited[i]) {
                if (detectcycle(i, -1, adj, visited)) return true;
            }
        }
        return false; 
    }
};