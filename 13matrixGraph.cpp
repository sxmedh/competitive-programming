#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int graph[N][N];
int main()
{
    int vertex, edge;

    for (int i = 0; i < edge; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
}