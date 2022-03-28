class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> map={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
        int num = 0;
        for (int i = 0; i < s.length() - 1; ++i) {
            if (map[s[i]] < map[s[i + 1]]) {
                num -= map[s[i]];
            } else {
                num += map[s[i]];
            }
        }
        num += map[s.back()];

        return num;
    }
};