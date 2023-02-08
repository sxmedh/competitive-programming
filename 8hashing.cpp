/*
Given array a of N integers. Given Q queries and in each query given a number X
print count of that number in array
constrains
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/
#include <bits/stdc++.h>
using namespace std;
const int si = 10e5 + 10;
int a[si];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        cout << a[temp] << endl;
    }
}