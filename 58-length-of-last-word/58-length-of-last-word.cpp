class Solution {
public:
int lengthOfLastWord(std::string s)
{
    int counter = 0;
    bool loop;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (!loop && counter != 0)
            break;
        loop = (s[i] != ' ') ? true : false;
        if (loop)
            counter++;
    }
    return counter;
}
}; 