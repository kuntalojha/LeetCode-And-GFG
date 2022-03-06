class Solution {
public:
    string toLowerCase(string s) {
        for(int k=0; k<s.size();k++)
        {
            if(s[k]<91 && s[k]>64)
            {
                s[k]=s[k]+32;
            }
        }
        return s;
    }
};