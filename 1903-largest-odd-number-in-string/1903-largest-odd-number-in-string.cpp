class Solution {
public:
    string largestOddNumber(string num) {
    string out;
    string possible;
    for(int i=0;i<num.size();i++)
    {
        int x=num[i]-'0';
        if(x%2==0)
        {
            possible+=num[i];
        }
        else
        {
            possible+=num[i];
            out=possible;
        }
    }
    return out;
    }
};
