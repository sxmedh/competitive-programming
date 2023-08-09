#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 10;
vector<int> g[N];
bool vis[N];
void dfs(int vertex)
{

    if (vis[vertex])
    {
        return;
    }
    cout << vertex << " ";
    vis[vertex] = true;
    for (auto child : g[vertex])
    {
        dfs(child);
    }
}

int main()
{
    int vertices = 6;
    int edges = 9;
    int arr[] = {1, 3, 1, 5, 3, 5, 3, 4, 3, 6, 3, 2, 2, 6, 4, 6, 5, 6};
    for (int i = 0; i < 18; i = i + 2)
    {
        int v1 = arr[i];
        int v2 = arr[i + 1];
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
    return 0;
}