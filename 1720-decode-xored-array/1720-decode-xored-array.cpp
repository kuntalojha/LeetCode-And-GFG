class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> a = {first};
		
        for(int i = 0; i < encoded.size(); i++) {
            int t = encoded[i]^a[i];
            a.push_back(t);
        }
		
        return a;
    }
};