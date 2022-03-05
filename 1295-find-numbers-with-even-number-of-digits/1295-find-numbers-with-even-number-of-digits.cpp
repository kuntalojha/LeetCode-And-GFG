class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int i=0; i<nums.size();i++)
        {
            int count=0;
            for(int j=nums[i];j>0;j=j/10)
            {
                count++;
            }
            if(count%2==0)
            {
                even++;
            }
        }
        return even;
    }
};