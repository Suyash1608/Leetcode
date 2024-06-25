class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result=strs[0];
        int reslen=result.length();
        for(int i=0;i<strs.size();i++)
        {
            while(strs[i].find(result)!=0)
            {
                result=result.substr(0,reslen-1);
                reslen--;
            }
        }
        return result;
    }
};