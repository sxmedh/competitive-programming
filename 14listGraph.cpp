#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
vector<int> graph[N]; // array of N vectors
vector<pair<int, int>> graph2[N];
int main()
{
    int vertex, edge;

    for (int i = 0; i < edge; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for (int i = 0; i < edge; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        graph2[v1].push_back({v2, wt});
        graph2[v2].push_back({v1, wt});
    }
}