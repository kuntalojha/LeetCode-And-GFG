class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freqMap;
        int answer = 0;
        for(int kuntal = 0 ; kuntal < n ; kuntal++){
            
            if(freqMap[k - nums[kuntal]] > 0){
                answer++;
                freqMap[k-nums[kuntal]]--;
            }else{
                freqMap[nums[kuntal]]++;
            }            
        }
            return answer;          
    }
};