#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1e5 + 5;
const long long MOD = 1e9 + 7;
const long long INF = 1e9;
const long double EPS = 1e-9;

int bestTimeToBuyAndSellStock(vector<int> &prices)
{
    int n = prices.size();
    int minCurr = prices[0];
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        minCurr = min(minCurr, prices[i]);
        int temp = prices[i] - minCurr;
        profit = max(profit, temp);
    }
    return profit;
}
int main()
{

    vector<int> vec = {7, 1, 5, 4, 3, 6};
    cout << bestTimeToBuyAndSellStock(vec);
    return 0;
}