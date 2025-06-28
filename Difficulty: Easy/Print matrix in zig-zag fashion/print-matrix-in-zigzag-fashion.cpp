// User function Template for C++
//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> zigZagMatrix(vector<vector<int>> &matrix) {
        int m = matrix.size();         // rows
    int n = matrix[0].size();      // columns

    for (int d = 0; d <= m + n - 2; d++) {
        if (d % 2 == 0) {
            // Even diagonals — start from bottom of diagonal going up
            for (int i = min(d, m - 1); i >= 0; i--) {
                int j = d - i;
                if (j < n) {
                    cout << matrix[i][j] << " ";
                }
            }
        } else {
            // Odd diagonals — start from top of diagonal going down
            for (int j = min(d, n - 1); j >= 0; j--) {
                int i = d - j;
                if (i < m) {
                    cout << matrix[i][j] << " ";
                }
            }
        }
    }
    }
};