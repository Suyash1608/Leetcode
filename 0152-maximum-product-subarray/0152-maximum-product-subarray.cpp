class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pre = 1, post = 1;
        int maxpro = INT_MIN;
        for(int i = 0; i < n; i++) {
            pre *= nums[i];
            post *= nums[n-i-1];
            maxpro = max(maxpro, max(pre, post));
            if(pre == 0) pre = 1;
            if(post == 0) post = 1;
        }
        return maxpro;
    }
};
