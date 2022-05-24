class Solution {
public:
    int longestValidParentheses(string str) {
        
        int k = str.size();
        
        vector<int> dp(k + 1, 0);
        
        dp[0] = 0;
        
        for(int i = 1; i < k; i++)
        {
            int j = i - dp[i] - 1;
            
            if(str[i] == ')' && j >= 0 && str[j] == '(')
            {
                dp[i + 1] = dp[i] + dp[j] + 2;
            }
        }
        
        return *max_element(dp.begin(), dp.end());
    }
};