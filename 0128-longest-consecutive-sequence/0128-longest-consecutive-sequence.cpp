class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;
        sort(nums.begin(), nums.end());
        int maxlen = 1;
        int len = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i + 1] - nums[i] == 1)
            {
                len++;
                maxlen = max(maxlen, len);
            }
        else if (nums[i + 1] != nums[i])
            {
                len = 1;
            }
    }
    return maxlen;
    }
};