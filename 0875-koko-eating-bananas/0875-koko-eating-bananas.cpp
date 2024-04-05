class Solution {
public:
    int maxbanana(vector<int>& piles) {
        int maxspeed = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            maxspeed = max(piles[i], maxspeed);
        }
        return maxspeed;
    }
    
    double totalh(vector<int>& piles, int speed) {
        double totalhour = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalhour += ceil((double)piles[i] / double(speed));  
        }
        return totalhour;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
    //     int maxispeed = maxbanana(piles);
    //     for (int i = 1; i <= maxispeed; i++) {
    //         double totalhours = totalh(piles, i);
    //         if (totalhours <= h) {
    //             return i;
    //         }
    //     }
    //     return maxispeed;
        int maxispeed=maxbanana(piles);
        int low=1;
        int high=maxispeed;
        while(low<=high)
        {
            int mid=(low+high)/2;
            double totalhours=totalh(piles,mid);
            if(totalhours<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
