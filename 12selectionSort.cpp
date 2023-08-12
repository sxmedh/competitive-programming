#include <bits/stdc++.h>
using namespace std;
const int MAX = 10e5;
int main()
{
    int n = 6;
    int a[] = {2, 1, 7, 5, 4, 3};
    for (int i = 0; i < n; i++)
    {
        int min_ele = i;
        for (int j = i; j < n; j++)
        {
            if (a[min_ele] > a[j])
            {
                min_ele = j;
            }
        }
        swap(a[i], a[min_ele]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}