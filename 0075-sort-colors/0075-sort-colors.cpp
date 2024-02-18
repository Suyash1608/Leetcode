class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int m=mp[0];
        int n=m+mp[1];
        int p=n+mp[2];

        for(int i=0;i<p;i++)
        {
            if(i<m)
            {
                nums[i]=0;
            }
            else if(i>=m && i<n)
            {
                nums[i]=1;
            }
            else
            {
                nums[i]=2;
            }
        }
        
    }
};