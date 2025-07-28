// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
            // If start or end is blocked
        if (A[0][0] == 0 || A[X][Y] == 0)
            return -1;

        // If start and end are the same
        if (X == 0 && Y == 0)
            return 0;

        // Visited matrix
        vector<vector<bool>> visited(N, vector<bool>(M, false));
        visited[0][0] = true;

        // Queue holds {{x, y}, distance}
        queue<pair<pair<int, int>, int>> q;
        q.push({{0, 0}, 0});

        // 4-directional movement
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        while (!q.empty()) {
            pair<pair<int, int>, int> front = q.front();
            q.pop();

            int x = front.first.first;
            int y = front.first.second;
            int dist = front.second;

            // If destination reached
            if (x == X && y == Y)
                return dist;

            // Explore 4 directions
            for (int i = 0; i < 4; ++i) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx >= 0 && ny >= 0 && nx < N && ny < M &&
                    A[nx][ny] == 1 && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    q.push({{nx, ny}, dist + 1});
                }
            }
        }

        return -1; 
    }
};