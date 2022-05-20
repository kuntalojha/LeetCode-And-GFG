class Solution{
public:
    int uniquePathsWithObstacles(vector<vector<int>>& a){
        int i, j, n, m;
        n = a.size();
        m = a[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        if(a[0][0] == 1){
            return 0;
        }
        for(i=0;i<n;i++){
            if(a[i][0] == 0){
                dp[i][0] = 1;
            }
            else{
                break;
            }
        }
        for(i=0;i<m;i++){
            if(a[0][i] == 0){
                dp[0][i] = 1;
            }
            else{
                break;
            }
        }
        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                if(a[i][j] == 1){
                    dp[i][j] = 0;
                }
                else{
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }
        return dp[n-1][m-1];
    }
};