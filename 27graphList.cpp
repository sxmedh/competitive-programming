#include <bits/stdc++.h>

using namespace std;
const int N = 10e3 + 10;
vector<pair<int, int>> graph[N];
int main()
{
    int vert, edge;
    cin >> vert >> edge;
    for (int i = 0; i < edge; i++)
    {
        int v1, v2, wt;
        cout << "Enter vertices and edges" << endl;
        cin >> v1 >> v2 >> wt;
        graph[v1].push_back({v2, wt});
        graph[v2].push_back({v1, wt});
    }
    // if i and j are connected
    int i = 0;
    int j = 1;
    for (auto it : graph[i])
    {
        if (it.first == j)
        {
            cout << "connected weight " << it.second << endl;
        }
    }
}