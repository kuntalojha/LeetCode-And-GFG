class Solution {
public:
    vector<string> v;
    vector<string> letters{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return v;
        string ans = "";
        letterComb(0, digits, ans);
        return v;
    }
    
    void letterComb(int i, string &digits, string ans) {
        if(ans.size()==digits.size()) {
            v.push_back(ans);
            return;
        }
        for(auto k: letters[digits[i]-'0']) {
            ans.push_back(k);
            letterComb(i+1, digits, ans);
            ans.pop_back();
        }
     return;
    }
};