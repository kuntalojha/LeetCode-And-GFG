class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans = {first};
		
        for(int i = 0; i < encoded.size(); i++) {
            int temp = encoded[i]^ans[i];
            ans.push_back(temp);
        }
		
        return ans;
    }
};