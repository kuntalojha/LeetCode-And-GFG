class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int max=0, c=0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                c++;
            }else 
            {
                c=0;
            }
            if(max<=c)
            {
               max=c;
            }
        }
        return max;
            
    }
};