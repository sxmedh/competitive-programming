#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[] = {7, 2, 4, 1, 6, 3};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}