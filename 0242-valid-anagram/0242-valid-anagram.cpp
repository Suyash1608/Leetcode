class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mps;
        map<char,int> mpt;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++)
        {
            mps[s[i]]++;
            mpt[t[i]]++;
        }
       return mps==mpt;
    }
};