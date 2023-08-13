#include <bits/stdc++.h>

using namespace std;

const int N = 10e5;

vector<int> graph[N];
bool visited[N];
queue<int> q;

void bfs()
{
    while (!q.empty())
    {
        int current = q.front();
        cout << current << " ";
        q.pop();

        for (auto it : graph[current])
        {
            if (!visited[it])
            {
                visited[it] = true;
                q.push(it);
            }
        }
    }
}

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

    for (int i = 0; i < vertices + 1; i++)
    {
        cout << i << " : ";
        for (auto it : graph[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
    int starting;
    cin >> starting;
    visited[starting] = true;
    q.push(starting);
    bfs();

    return 0;
}