#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1e5 + 5;
const long long MOD = 1e9 + 7;
const long long INF = 1e9;
const long double EPS = 1e-9;
bool visited[MAX_N];
void dfs(int vertex, vector<vector<int>> &roads, int n)
{
    if (visited[vertex])
    {
        return;
    }
    visited[vertex] = true;
    for (int i = 0; i < n; i++)
    {
        if (roads[vertex][i] == 1)
        {
            dfs(i, roads, n);
        }
    }
}
int findNumOfProvinces(vector<vector<int>> &roads, int n)
{
    int ct = 0;
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < n; ++j)
    //     {
    //         cout<<roads[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            continue;
        }
        dfs(i, roads, n);
        ct++;
    }
    return ct;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> roads;
    for (int i = 0; i < n; ++i)
    {
        vector<int> temp;
        for (int j = 0; j < n; ++j)
        {

            int x;
            cin >> x;
            temp.push_back(x);
        }
        roads.push_back(temp);
    }
    int ans = findNumOfProvinces(roads, n);
    cout << ans;
    return 0;
}