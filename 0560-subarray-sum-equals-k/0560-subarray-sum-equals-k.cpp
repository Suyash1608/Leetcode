class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int sum=0;
        map<int,int> mp;
        mp[0]=1;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int rem=sum-k;
            cnt+=mp[rem];
            mp[sum]++;
        }
        return cnt;
    }
};