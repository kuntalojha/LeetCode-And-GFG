class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(auto i:address)
        {
            if(i=='.')
            {
                ans=ans+'[';
                ans=ans+'.';
                ans=ans+']';

            }else
            {
                ans=ans+i;
            }
        }
        return ans;
    }
};