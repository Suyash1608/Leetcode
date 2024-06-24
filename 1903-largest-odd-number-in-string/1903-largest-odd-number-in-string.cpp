class Solution {
public:
    string largestOddNumber(string num) {
        // string possible="";
        string out="";
        // for(int i=0;i<num.size();i++)
        // {
        //     int x=num[i]-'0';
        //     possible+=num[i];
        //     if(x%2!=0)
        //     {
        //         out=possible;
        //     }
        // }
        // return out;
         int n = num.size();
        for (int i = n - 1; i >= 0; --i) {
            if ((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};
