#include <bits/stdc++.h>

using namespace std;
const int N = 10e5;
int dp[N] = {-1};
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n + 5; i++)
    {
        dp[i] = -1;
    }
    cout << fib(n) << endl;
}
