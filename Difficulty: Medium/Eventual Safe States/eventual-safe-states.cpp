// User function Template for C++

class Solution {
   public:
    // Function to check if a node is eventually safe using DFS
    bool dfs(int node, vector<int>adj[], int color[]) {
        
        // If node is already visited
        // If it's marked safe (color == 2), return true
        // If it's marked visiting (color == 1), that means cycle detected → return false
        if (color[node] != 0) {
            if (color[node] == 2) return true;   // already safe
            else return false;                   // currently in DFS path → cycle
        }
        // Mark current node as "visiting" (color = 1)
        // This helps in cycle detection (we’re in current DFS path)
        color[node] = 1;

        // Traverse all neighbours of the current node
        for (int nei : adj[node]) {
            // If any neighbour leads to a cycle, current node is also unsafe
            if (!dfs(nei, adj, color)) return false;
        }

        // All neighbours are safe and no cycle was found,
        // so this node is safe. Mark it as "safe" (color = 2)
        color[node] = 2;

        // Return true indicating current node is eventually safe
        return true;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        int color[V] = {0};
        vector<int> safe;
         for (int i = 0; i < V; ++i) {
            if (dfs(i, adj, color)) {
                safe.push_back(i);
            }
        }

        return safe;
    }
};
