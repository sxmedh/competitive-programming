// C++ program for Merge Sort
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int pt1 = low;
    int pt2 = mid + 1;
    while (pt1 <= mid && pt2 <= high)
    {
        if (arr[pt1] <= arr[pt2])
        {
            temp.push_back(arr[pt1]);
            pt1++;
        }
        else
        {
            temp.push_back(arr[pt2]);
            pt2++;
        }
    }
    while (pt1 <= mid)
    {
        temp.push_back(arr[pt1]);
        pt1++;
    }

    //  if elements on the right half are still left //
    while (pt2 <= high)
    {
        temp.push_back(arr[pt2]);
        pt2++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
// Driver code
int main()
{
    vector<int> arr = {2, 13, 4, 1, 3, 6, 28};
    mergeSort(arr, 0, 6);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
