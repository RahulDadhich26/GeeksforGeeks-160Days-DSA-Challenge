class Solution {
public:
    int findDelayTime(int n, vector<vector<int>> &edges, int src) {
        // Step 1: Build the adjacency list
        vector<vector<pair<int, int>>> adj(n + 1); // index from 0 to n
        for (auto &it : edges) {
            adj[it[0]].push_back({it[1], it[2]});
        }

        // Step 2: Dijkstra initialization
        vector<int> dist(n + 1, 1e9); // use n+1 so that index n is accessible
        dist[src] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, src});

        while (!pq.empty()) {
            pair<int, int> top = pq.top(); pq.pop();
            int time = top.first;
            int node = top.second;

            if (time > dist[node]) continue;

            for (int i = 0; i < adj[node].size(); i++) {
                int v = adj[node][i].first;
                int w = adj[node][i].second;

                if (dist[node] + w < dist[v]) {
                    dist[v] = dist[node] + w;
                    pq.push({dist[v], v});
                }
            }
        }

        // Step 3: Compute maximum time
        int ans = 0;
        for (int i = 0; i < n; i++) { // use i=0 to i=n-1 if 0-based; i=1 to n if 1-based
            if (dist[i] == 1e9) return -1;
            ans = max(ans, dist[i]);
        }

        return ans;
    }
};