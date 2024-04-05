class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {int n=prices.size();
        if(prices.size()==0)
        return 0;
        int curr=0;
        int mini=INT_MAX;
        int profit=0,maxi=0;
        for(int i=0;i<=n-1;i++)
        {
            mini=min(mini,prices[i]);
            profit=prices[i]-mini;
            maxi=max(maxi,profit);
        }
        return maxi;
    }
};