/*
    Given 2d array of N*N integers. Given Q queries and in each query
    given a,b,c and d print sum of square represented by (a,b) as top left point and
    (c,d) as bottom right point

    1<= N <= 10e3
    1<= a[i][j] <= 10e9
    1<= Q <= 10e5
    1<= a,b,c,d <= N
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 10e3 + 10;
int arr[N][N];
int arr2[N][N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr2[i][j] = arr[i][j] + arr2[i][j - 1] + arr2[i - 1][j] - arr2[i - 1][j - 1];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << "sum of rectangle: ";
        cout << arr2[c][d] - arr2[a - 1][d] - arr2[c][b - 1] + arr2[a - 1][b - 1] << endl;
    }
}