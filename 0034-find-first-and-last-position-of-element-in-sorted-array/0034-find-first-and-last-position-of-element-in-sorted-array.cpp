class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = -1; 
        int end = -1; 
        int l = 0;
        int h = n - 1;
        while (l <= h) 
        {
            int mid = (l + h) / 2;
            if (nums[mid] >= target) 
            {
                start = mid;
                h = mid - 1;
            }
            else 
            {
                l = mid + 1;
            }
        }
        l = 0;
        h = n - 1;
        while (l <= h) 
        {
            int mid = (l + h) / 2;
            if (nums[mid] <= target) 
            { 
                end = mid;
                l = mid + 1;
            }
            else 
            {
                h = mid - 1;
            }
        }
        if (start == -1 || nums[start] != target) 
            return {-1, -1};
        return {start, end};
    }
};
