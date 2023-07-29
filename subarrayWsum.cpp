#include <bits/stdc++.h>

using namespace std;

int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    int count = 0;
    int sum = 0;
    int start = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            count++;
        }
        while (sum > k)
        {
            sum = sum - arr[start];
            start++;
            if (sum == k)
            {
                count++;
                break;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> arr{3, 1, 2, 4};
    cout << findAllSubarraysWithGivenSum(arr, 6) << endl;
}