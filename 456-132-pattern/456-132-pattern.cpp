class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int S = INT_MIN;
       int n = nums.size();
        stack<int>s;
        for(int i = n-1;i>=0;i--)
        {
            if(nums[i]<S)
                return 1;
            else
            {
                while(!s.empty() && nums[i]>s.top())
                {
                    S = s.top();
                    s.pop();
                }
            }
            s.push(nums[i]);
        }
        return 0;
    }
};