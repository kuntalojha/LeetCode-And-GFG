class Solution {
public:
    string interpret(string command) {
        string res;
        for(int i = 0; i < command.size(); i++){
        if(command[i] != '(' && command[i] != ')')
            res += command[i];
        else if(command[i] == '(' && command[i + 1] == ')') res += 'o';
    }
    return res;
    }
};