class Solution {
public:
    bool isPowerOfTwo(int n) {
         if(n<0)
             return false;
        int kuntal=0;
        while (n)
        {
            kuntal++;
            n=n & (n-1);
        }
        if(kuntal==1)
            return true;
        else
            return false;
    }
};