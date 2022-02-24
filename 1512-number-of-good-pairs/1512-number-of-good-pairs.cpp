class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0,len=nums.size();
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                if((nums[i]==nums[j]) && (i<j))
                {
                    count++;
                }
            }
        }
        return (count);
    }
};