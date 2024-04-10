class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n = (long long)m * k;
        if (bloomDay.size() < n) {
            return -1;
        }
        
        int mini = *min_element(bloomDay.begin(), bloomDay.end());
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
        int result=-1;
        int low=mini;
        int high=maxi;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int flowers = 0;
            int bouquets = 0;
            for (int bloom : bloomDay) {
                if (bloom <= mid) {
                    flowers++;
                    if (flowers == k) {
                        bouquets++;
                        flowers = 0;
                    }
                } else {
                    flowers = 0;
                }
            }
            
            if (bouquets >= m) {
                result=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        return result;
    }
};