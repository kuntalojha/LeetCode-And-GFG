class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        map<char,vector<int>> m;
        for(int i=0; i<s.size(); i++){
            if(!st.empty() and st.top().first == s[i]){
                st.push({s[i], st.top().second+1});
                if(st.top().second == k){
                    int a = k;
                    while(a--){
                        st.pop();
                    }
                }
            }else{
                st.push({s[i],1});
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top().first; st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};