class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,result=0,m=0;
        for(int i=n;i>0;i=i/10)
        {
            m=i%10;
            product=m*product;
            sum=sum+m;
        }
        return (result=product-sum);
    }
};