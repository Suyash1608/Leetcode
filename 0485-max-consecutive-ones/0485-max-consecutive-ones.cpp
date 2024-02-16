class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxcnt = 0;
        int cnt = 0;
        
        for (auto &i: nums) 
        {
            if (i == 1) 
            {
                cnt++;
                maxcnt = max(cnt, maxcnt);
            } 
            else 
            {
                cnt = 0;
            }
        }
        
        return maxcnt;
    }
};
