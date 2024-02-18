class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //     int maxsum=INT_MIN;
    // for(int i=0;i<nums.size();i++)
    // {
    //     int sum=0;
    //     for(int j=i;j<nums.size();j++)
    //     {
    //         sum=sum+nums[j];
    //         maxsum=max(sum,maxsum);
    //     }
    // }
    // return maxsum;
       int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum=sum+nums[i];
        if(sum>maxsum)
        {
            maxsum=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxsum;
    }
};