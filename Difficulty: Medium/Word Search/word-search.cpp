//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isWordExist(vector<vector<char>>& board, string& word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(dfs(board , word, i , j , 0)){
                    return true;
                }
            }
        }
        return false;
    }
  private:
    bool dfs(vector<vector<char>>& board, string& word , int i, int j, int index){
        if(index == word.size()) return true;
        if( i < 0 || i >= board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[index]) return false;
        
        char temp = board[i][j] ;
        board[i][j] = '#';
        
        bool found = dfs(board , word, i+1, j , index + 1) || dfs(board , word, i, j-1 , index + 1) || dfs(board , word, i, j+1 , index + 1) || dfs(board , word, i-1, j , index + 1);
        board[i][j] = temp;
        return found;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends