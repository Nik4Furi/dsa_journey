typedef vector<int> vi;
#define v vector
int helper(int ind, int buy, int cap, int n, vi &price, v<v<vi>> &dp)
{
    if (cap == 0)
        return 0;
    if (ind == n)
        return 0;
    if (dp[ind][buy][cap] != -1)
        return dp[ind][buy][cap];

    if (buy)
    { // means we are open to buy stock
        return dp[ind][buy][cap] = max(-price[ind] + helper(ind + 1, 0, cap, n, price, dp),
                                       0 + helper(ind + 1, 1, cap, n, price, dp));
    }
    else
    { // means we are open to sell
        return dp[ind][buy][cap] = max(price[ind] + helper(ind + 1, 1, cap - 1, n, price, dp),
                                       0 + helper(ind + 1, 0, cap, n, price, dp));
    }
}

int maxProfit(vi &price)
{
    int n = price.size();
    v<v<vi>> dp(n, v<vi>(2, vi(3, -1)));
    return helper(0, 1, 2, n, price, dp);
}