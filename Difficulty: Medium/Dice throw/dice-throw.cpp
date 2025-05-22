class Solution {
  private:
    int faces;

    int solve(int dice, int sum, vector<vector<int>> &dp) {
        if (!sum && !dice) return 1;
        if (!dice || sum < 0) return 0;

        if (dp[dice][sum] != -1) return dp[dice][sum];

        int count = 0;
        for (int j = 1; j <= faces; j++)
            count += solve(dice - 1, sum - j, dp);

        return dp[dice][sum] = count;
    }

public:
    int noOfWays(int m, int n, int x) {
        faces = m;
        vector<vector<int>> dp(n + 1, vector<int>(x + 1, -1));
        return solve(n, x, dp);
    }
};