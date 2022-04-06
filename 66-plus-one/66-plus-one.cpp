class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;      
        int sum = 0;
        for(int i = digits.size()-1 ; i >=0 ; i--){
            sum = (digits[i] + carry)%10;
            carry = (digits[i] + carry)/10;
            digits[i] = sum ; 
        }
        if(carry>0){
            auto it = digits.insert(digits.begin(), carry);      
        }
        return digits;
    }
};
