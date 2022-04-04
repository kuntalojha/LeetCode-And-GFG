class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        nums.push_back(target);
        int j=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                j=i;
                break;
            }
        }
        return j;
    }
};