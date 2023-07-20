#include <bits/stdc++.h>

using namespace std;

int longestSubarray(vector<int> a, long long k)
{
    map<long long, int> mmap;
    long long sum = 0;
    int maxLength = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxLength = max(maxLength, i + 1);
        }
        long long remain = sum - k;
        if (mmap.find(remain) != mmap.end())
        {
            int Length = i - mmap[remain];
            maxLength = max(maxLength, Length);
        }
        if (mmap.find(sum) == mmap.end())
        {
            mmap[sum] = i;
        }
    }
    return maxLength;
}

int longestSubarrayPostive(vector<int> a, long long k)
{
    int n = a.size(); // size of the array.

    int left = 0, right = 0; // 2 pointers
    long long sum = a[0];
    int maxLen = 0;
    while (right < n)
    {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward thw right pointer:
        right++;
        if (right < n)
            sum += a[right];
    }

    return maxLen;
}
int main()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    cout << longestSubarray(a, k);

    return 0;
}