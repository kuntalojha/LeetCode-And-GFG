class Solution {
public:
    int arraySign(vector<int>& nums) {
      int ans = 1 ;
      for(int i : nums){
          if(i == 0) return 0 ;
          else if(i < 0) ans = ans * -1 ;
      }
      return ans > 0 ? 1 : -1 ;
            
    }
};