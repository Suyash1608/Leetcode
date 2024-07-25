class Solution {
public:
    bool negativitycheck(string s)
{
    if(s[0]=='-')
    {
        return true;
    }
    else{
        return false;
    }
}

int myAtoi(string s)
{
    string result;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            result=s.substr(i);
            break;
        }
    }
    bool check=negativitycheck(result);
    if(check==true || result[0]=='+')
    {
        result.erase(0,1);
    }
    for(int i=0;i<result.length();i++)
    {
        if(result[i]!='0')
        {
            result=result.substr(i);
            break;
        }
    }


    int res = 0;
        for (int i = 0; i < result.length(); i++) {
            if (result[i] >= '0' && result[i] <= '9') {
                int digit = result[i] - '0';

                // Check if adding this digit would overflow
                if (res > (INT_MAX - digit) / 10) {
                    if (check) {
                        return INT_MIN; // Negative overflow
                    } else {
                        return INT_MAX; // Positive overflow
                    }
                }

                res = res * 10 + digit;
            } else {
                break;
            }
        }
if (check)
    {
        res = -res;
    }

    return res;
}
};