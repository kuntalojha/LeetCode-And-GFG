class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i=0;
        while(n>0)
        {
            i++;
            n=n & (n-1);
        }
        return i;
    }
};