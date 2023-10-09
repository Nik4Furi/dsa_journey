int maxProfit(vector<int> &prices)
{
    int maxi = 0, buy = prices[0];

    for (int i = 0; i < prices.size(); i++)
    {
        buy = min(prices[i], buy);
        int sell = prices[i];

        int profit = sell - buy;
        maxi = max(profit, maxi);
    }

    return maxi;
}