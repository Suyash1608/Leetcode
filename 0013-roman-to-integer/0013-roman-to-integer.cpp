class Solution {
public:
    int value(char roman)
    {
        if(roman=='I')
        {
            return 1;
        }
        if(roman=='V')
        {
            return 5;
        }
        if(roman=='X')
        {
            return 10;
        }
        if(roman=='L')
        {
            return 50;
        }
        if(roman=='C')
        {
            return 100;
        }
        if(roman=='D')
        {
            return 500;
        }
        if(roman=='M')
        {
            return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int result=0;
        for(int i=0;i<s.length();i++)
        {
            if(value(s[i])>=value(s[i+1]))
            {
                result=result+value(s[i]);
            }
            else{
                result=result+(value(s[i+1])-value(s[i]));
                i++;
            }
            if(i>s.length()-1)
            {
                result+=value(s[i]);
            }
        }
        return result;
    }
};