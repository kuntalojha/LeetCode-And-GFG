class Solution {
public:
    int dp[202][202];
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};
    bool isSafe(int m, int n, int row, int col) {
        return row >= 0 && row < m && col >= 0 && col < n;
    }
    int dfs(vector<vector<int>>& matrix, int m, int n, int row, int col) {
        if(dp[row][col] != -1) return dp[row][col];
        int ans = 1;
        for(int i=0; i<4; i++) {
            int x = row + dx[i];
            int y = col + dy[i];
            if(isSafe(m, n, x, y)) {
                if(matrix[x][y] > matrix[row][col]) {
                    int tmp = 1 + dfs(matrix, m, n, x, y);
                    ans = max(ans, tmp);
                }
            }
        }
        return dp[row][col] = ans;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int count = 0, ans = 0;
        memset(dp, -1, sizeof(dp));
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                count = dfs(matrix, m, n, i, j);
                ans = max(ans, count);
            }
        }
        return ans;
    }
};