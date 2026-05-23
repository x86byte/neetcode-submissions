// https://leetcode.com/problems/unique-paths/

class Solution {
public:
    int uniquePaths(const int m, const int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1));
        dp[0][0]=1;
        for(int i = 1; i < m; i++)
        {
            for(int d = 1; d < n; d++)
            {
                dp[i][d] = dp[i - 1][d] + dp[i][d - 1];
            }
        }
        return abs(dp[m - 1][n - 1]);
    }
};
