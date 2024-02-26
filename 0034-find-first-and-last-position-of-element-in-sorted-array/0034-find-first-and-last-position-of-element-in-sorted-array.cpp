class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = -1; // initialize start to -1 instead of n
        int end = -1; // initialize end to -1 instead of 0
        int l = 0;
        int h = n - 1;
        while (l <= h) {
            int mid = (l + h) / 2;
            if (nums[mid] >= target) {
                start = mid;
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        l = 0;
        h = n - 1;
        while (l <= h) {
            int mid = (l + h) / 2;
            if (nums[mid] <= target) { // change the comparison to <= instead of >
                end = mid;
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }
        if (start == -1 || nums[start] != target) // check if start is -1 or nums[start] is not equal to target
            return {-1, -1};
        return {start, end};
    }
};
