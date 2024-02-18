class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        // Brute Force
        // for(int i=0;i<prices.size();i++)
        // {
        //     for(int j=i+1;j<prices.size();j++)
        //     {
        //         if(prices[j]>prices[i])
        //         {
        //             max_profit=max(max_profit,prices[j]-prices[i]);
        //         }
        //     }
        // }
        // Optimal Solution
        int minprice=INT_MAX;
        for(int i=0 ;i<prices.size();i++)
        {
            minprice=min(minprice,prices[i]);
            max_profit=max(max_profit,prices[i]-minprice);
        }
        return max_profit;
    }
    
};