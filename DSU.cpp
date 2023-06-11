#include <bits/stdc++.h>
using namespace std;
const int N = 10000;
int parent[N];
void make(int v)
{
    parent[v] = v;
}

int find(int v)
{
    if (parent[v] == v)
    {
        return v;
    }
    return find(parent[v]);
}

void Union(int a, int b)
{
    int PA = find(a);
    int PB = find(b);
    if (a != b)
    {
        parent[PB] = PA;
    }
}

int main()
{

    return 0;
}