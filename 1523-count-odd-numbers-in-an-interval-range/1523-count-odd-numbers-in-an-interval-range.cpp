class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        for(int i=low; i<=high; i++)
        {
            (i%2==0)? : count++;
        }
        return (count);
    }
};