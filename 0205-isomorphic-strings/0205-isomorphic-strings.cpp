class Solution {
public:
    bool isIsomorphic(string s, string t) {
    if(s.length()!=t.length())
    {
        return false;
    }
    unordered_map<char,char> mp;
    for(int i=0;i<s.length();i++)
    {
        if(mp.find(s[i])==mp.end())
        {
            for(auto &pa :mp)
            {
                if(pa.second==t[i])
                    return false;
            }
                mp[s[i]]=t[i];
        }
        else
        {
            if(mp[s[i]]!=t[i])
            {
                return false;
            }
        }
    }
    string result;
    for(auto j:s)
    {
        result.push_back(mp[j]);
    }
    return result==t;
}
};