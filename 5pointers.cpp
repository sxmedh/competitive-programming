#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 4;
    int *px = &x;
    cout << x << endl;
    cout << px << endl;
    cout << *px << endl;
    cout << px + 1 << endl;
    cout << "double pointer" << endl;
    int **ppx = &px;
    cout << ppx << endl;
    cout << *ppx << endl;
    cout << **ppx << endl;
    int a[3];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    cout << a << endl;
    cout << &a[0] << endl;
    cout << a + 1 << endl;
    cout << *(a + 1) << endl;
    cout << a + 2 << endl;
}