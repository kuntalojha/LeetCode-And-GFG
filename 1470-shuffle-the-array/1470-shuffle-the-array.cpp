class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec;
        int k=n;
        for(int i=0;i<n;i++)
        {
            vec.push_back(nums[i]);
            vec.push_back(nums[k]);
            k++;
        }
        return vec;
    }
};