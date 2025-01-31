//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
// Helper function to check if a number can be placed in a cell
bool isSafe(vector<vector<int>>& mat, int row, int col, int num) {
    // Check row and column
    for (int i = 0; i < 9; i++) {
        if (mat[row][i] == num || mat[i][col] == num) {
            return false;
        }
    }

    // Check 3x3 sub-grid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[startRow + i][startCol + j] == num) {
                return false;
            }
        }
    }

    return true;
}

// Recursive function to solve the Sudoku
bool solve(vector<vector<int>>& mat) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            // Find an empty cell
            if (mat[row][col] == 0) {
                // Try numbers from 1 to 9
                for (int num = 1; num <= 9; num++) {
                    // Check if the number is valid
                    if (isSafe(mat, row, col, num)) {
                        // Place the number
                        mat[row][col] = num;

                        // Recursively solve the rest of the grid
                        if (solve(mat)) {
                            return true;
                        }

                        // Backtrack if the solution is not feasible
                        mat[row][col] = 0;
                    }
                }
                // If no number works, return false
                return false;
            }
        }
    }
    // If no empty cells are left, Sudoku is solved
    return true;
}

// Main function to solve the Sudoku
void solveSudoku(vector<vector<int>>& mat) {
    solve(mat);
}
};

//{ Driver Code Starts.

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<vector<int>> grid;
        for (int i = 0; i < 9; i++) {
            vector<int> v = inputLine();
            grid.push_back(v);
        }

        Solution ob;

        ob.solveSudoku(grid);

        for (auto v : grid) {
            for (auto elem : v) {
                cout << elem << " ";
            }
            cout << endl;
        }

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends