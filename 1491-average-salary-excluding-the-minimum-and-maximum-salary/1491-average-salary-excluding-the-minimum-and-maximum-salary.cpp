class Solution {
public:
    double average(vector<int>& salary) {
        sort (salary.begin(),salary.end());
        double sum=0,count=0,len=salary.size();
        for(int i=1;i<len-1;i++)
        {
            sum +=salary[i];
            count++;
        }
        return (sum/count);
    }
};