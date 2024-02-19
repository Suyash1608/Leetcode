class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                n.push_back(nums[i]);
            }
            else
            {
                p.push_back(nums[i]);
            }
        }
        if(n.size()<p.size())
        {
            int j;
            for( j=0;j<n.size();j++)
            {
                nums[j*2]=p[j];
                nums[j*2+1]=n[j];
            }
            while(j<p.size())
            {
                nums[j]=p[j];
                j++;
            }
            
        }
        else
        { 
            int j;
            for( j=0;j<p.size();j++)
            {
                nums[j*2]=p[j];
                nums[j*2+1]=n[j];
            }
            while(j<n.size())
            {
                nums[j]=n[j];
                j++;
            }
        }
        return nums;
    }
};