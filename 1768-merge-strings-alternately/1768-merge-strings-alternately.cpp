class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1=word1.size(),len2=word2.size();
        string k;
        for(int i=0,l=0,m=0;i<(len1+len2)-1;i++)
        {
            if(l<len1)
             {
                k.push_back(word1[l]);
                l++;
             }
            if(m<len2)
            {
                k.push_back(word2[m]);
                m++;
            }            
        }
        return k;
    }
};