class Solution {
public:
    int dp[101][101][601]; // m,n,idx
    int helper(vector<string>& strs, int m, int n, int idx)
    {
        if (idx >= strs.size()) { // Reached end of strs arr.
            return 0;
        }
        if (dp[m][n][idx] != -1) 
            return dp[m][n][idx];
        int res1 = helper(strs, m, n, idx+1);
        int count[2] = {0,0};
        for (int i = 0; i < strs[idx].length(); i++){
            if (strs[idx][i] == '0') count[0]++;
            else count[1]++;
        }
        int res2 = 0;
        if (!(m - count[0] < 0 || n - count[1] < 0)){
            res2 = 1 + helper(strs, m - count[0] , n - count[1], idx+1);
        }
        dp[m][n][idx] = max(res2, res1);
        return dp[m][n][idx];
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp, -1, sizeof(dp));
        return helper(strs, m, n, 0);
    }
};