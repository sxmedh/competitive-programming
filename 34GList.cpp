#include <bits/stdc++.h>

using namespace std;

const int N = 10e5;

vector<int> graph[N];

int main()
{
    int vertices, edges;
    cin >> vertices >> edges;
    for (int i = 0; i < edges; ++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    for (int i = 0; i < vertices; i++)
    {
        for (auto it : graph[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}