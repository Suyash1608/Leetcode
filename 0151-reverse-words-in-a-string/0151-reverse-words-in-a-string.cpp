class Solution {
public:
    string reverseWords(string s)
    {
        string word="";
        vector<string> out;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                word+=s[i];
            }
            else
            {
                if(!word.empty())
                {
                    out.push_back(word);
                    word="";
                }
            }
        }
        if(!word.empty())
        {
            out.push_back(word);
        }
        string result;
        for(int i=out.size()-1;i>=0;i--)
        {
            result+=out[i];
            if(i>0)
            {
                result+=" ";
            }
        }
        return result;
    }
};