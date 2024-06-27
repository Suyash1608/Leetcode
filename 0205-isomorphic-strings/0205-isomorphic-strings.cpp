class Solution {
public:
    bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
        return false;

    unordered_map<char, char> mp;

    for (int i = 0; i < s.length(); i++)
    {
        if (mp.find(s[i]) != mp.end())
        {
            // s[i] already mapped, ensure it maps to t[i]
            if (mp[s[i]] != t[i])
                return false;
        }
        else
        {
            // check bidirectional mapping consistency
            for (auto& pair : mp)
            {
                if (pair.second == t[i])
                    return false; // t[i] is already mapped to by another character
            }
            mp[s[i]] = t[i];
        }
    }

    string result;
    for (auto j : s)
    {
        result.push_back(mp[j]);
    }

    return result == t;
}
};