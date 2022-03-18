class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string vec = s;
        for(int i=0;i<indices.size();i++)
            vec[indices[i]]=s[i];return vec;
    }
};