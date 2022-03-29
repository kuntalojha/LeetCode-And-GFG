class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> vec;
        int count=0;
        for(int i=0;i<arr.size() && count<arr.size();i++)
        {
            if(arr[i]==0)
            {
                vec.push_back(0);
                count++;
                vec.push_back(0);
                count++;
            }else
            {
                vec.push_back(arr[i]);
                count++;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=vec[i];
        }
    }
};