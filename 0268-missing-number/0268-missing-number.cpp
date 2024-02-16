class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int asum=0;
        for(int i=0;i<n;i++)
        {
            asum=asum+nums[i];
        }
        return (n*(n+1))/2-asum;
    }
};