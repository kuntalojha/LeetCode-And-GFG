class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int len=candies.size();
        int max_number=0;
        for(int i=0;i<len;i++)
        {
            if(max_number<candies[i])
            {
                max_number=candies[i];
            }
        }
        for(int i=0;i<len;i++)
        {
             if(candies[i]+extraCandies>=max_number)
             {
                 result.push_back(1);
             }
            else
            {
                result.push_back(0);
            }
        }
        return result;
    }
};