#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7, 2, 3, 1, 4, 6};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        while (arr[j] < arr[j - 1] && j > 0)
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}