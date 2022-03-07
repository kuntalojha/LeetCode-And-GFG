class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int c=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="X++" || operations[i]=="x++" || operations[i]=="++X" || operations[i]=="++x")
            {
                c++;
            }else
            {
                c--;
            }
        }
        return c;
    }
};