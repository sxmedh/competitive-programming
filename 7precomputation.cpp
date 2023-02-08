/*
    Given T test cases and in each test case a number N.
    print its factorial for each test case % M
    constraints
    1 <= T <= 10e5
    1 <= N <= 10e5
*/
#include <bits/stdc++.h>
using namespace std;
const int si = 10e5 + 10;
const int M = 10e9 + 7;
long long arr[si];
int main()
{
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < si; i++)
    {
        arr[i] = (arr[i - 1] * i) % M;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }
}