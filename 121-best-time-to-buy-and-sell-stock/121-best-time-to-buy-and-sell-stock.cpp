class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int diff;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
                min=prices[i];
            diff=prices[i]-min;
            profit=max(profit,diff);
        }
        return profit;
    }
};