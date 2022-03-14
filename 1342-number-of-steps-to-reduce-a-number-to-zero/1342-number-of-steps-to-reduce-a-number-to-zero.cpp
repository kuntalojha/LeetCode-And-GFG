class Solution {
public:
    int numberOfSteps(int num) {
        int count=-1;
        for(int i=num;i>=0;)
        {
            if(i%2==0 && i!=0)
            {
                i=i/2;
                ++count;
            }else
            {
                i--;
                ++count;
            }
        }
        return (count);
    }
};