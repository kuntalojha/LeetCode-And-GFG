class Solution {
public:
    int minPartitions(string n) {
        int maxi=-1;
         for(int i=0; i < n.size();i++)
         {
             int need= n[i]-'0';
       maxi= max(need,maxi);
         }
         return maxi ;
    }
};