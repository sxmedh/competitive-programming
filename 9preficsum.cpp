/*
    Given an array of N intergers. Given Q queries and in each query
    given L and R print sum of array elements from L to R (l and r included)
    Constraints
    1 <= N <= 10e5
    1 <= arr[i] <= 10e9
    1 <= Q <= 10e5
    1 <= L,R <= N
*/
#include <bits/stdc++.h>
using namespace std;
const int si = 10e5 + 10;
int arr[si];
int main()
{
    int n;
    cin >> n;
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = arr[i - 1] + temp;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        // to solve this we will store the sum of of the
        // elements upto that point in the array and then
        // we can subtract sum till L from sum till R
        cout << arr[r] - arr[l - 1] << endl;
    }
}