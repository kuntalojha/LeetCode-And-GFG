class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a,b,c,len=nums.size();
        for(int i=len-1;i>=2;i--)
        {
            a=nums[i-2];
            b=nums[i-1];
            c=nums[i];
            if(a+b>c)
                return a+b+c;
        }
        return 0;
    }
};