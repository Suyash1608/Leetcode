class Solution {
public:
    int smallestDivisor(std::vector<int>& nums, int threshold) {
        int maxi = *std::max_element(nums.begin(), nums.end());
        int low=1;
        int high=maxi;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int total=0;
            for(int num : nums)
            {
                total +=ceil((double)(num) / mid);
            }
            if(total<=threshold)
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return low;
    }
};
