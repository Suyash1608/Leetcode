class Solution {
public:
    
    static bool sortbyfrequency(const pair<char,int>&a ,const pair<char,int>&b)
    {
        return a.second>b.second;
    }
    string frequencySort(string s){
        string result;
        map<char,int> mp;
        for(auto i :s)
        {
           mp[i]++;
        }
        vector<pair<char,int>> pa (mp.begin(),mp.end());
        sort(pa.begin(),pa.end(),sortbyfrequency);
        for(auto i:pa)
        {
            char character=i.first;
            int frequency=i.second;
            for(int j=0;j<frequency;j++)
            {
               result+=character; 
            }
        }
        return result;
    }
};