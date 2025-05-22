class Solution {
  public:
  
  int longestPalindromicSubsequence(string s) {
    int n = s.size();
    string rev = string(s.rbegin(), s.rend());
    
    // LCS of s and its reverse gives the LPS
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(s[i - 1] == rev[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    
    return dp[n][n];
}
    int minDeletions(string s) {
         int lps = longestPalindromicSubsequence(s);
    return s.size() - lps;
    }
};