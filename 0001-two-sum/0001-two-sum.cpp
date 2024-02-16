class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int i=0;
        int j=n-1;
        vector<int> oindex(n);
        iota(oindex.begin(), oindex.end(), 0);
        sort(oindex.begin(), oindex.end(), [&](int a, int b) {
            return nums[a] < nums[b];
        });

                while (i < j) {
            if (nums[oindex[i]] + nums[oindex[j]] == target) {
                return {oindex[i], oindex[j]};
            } else if (nums[oindex[i]] + nums[oindex[j]] > target) {
                j--;
            } else {
                i++;
            }
        }

        return {-1, -1};

    }
};