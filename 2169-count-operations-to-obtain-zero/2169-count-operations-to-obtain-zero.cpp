class Solution {
public:
    int countOperations(int num1, int num2) {
        // if(num1==num2)
        // {
        //     return 1;
        // }
        int count =0;
        while(num1 && num2)
        {
            if(num1>=num2)
            {
                count++;
                num1=num1-num2;
            }else             
            {
                count++;
                num2=num2-num1;
            }
        }
        return count;
    }
};