class Solution {
public:
    string largestOddNumber(string num) {
        string possible="";
    string out="";
    for(int i=0;i<num.size();i++)
    {
        int x=num[i]-'0';
        possible+=num[i];
        if(x%2!=0)
        {
            out=possible;
        }
    }
    return out;
    }
};
