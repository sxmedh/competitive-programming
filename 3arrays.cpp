#include <bits/stdc++.h>
using namespace std;
const int n = 1e7;
int c[n];
int main()
{
    int a[10];
    // 2d array
    int b[4][3];
    /*
        this array will be
        [0,0][0,1][0,2]
        [1,0][1,1][1,2]
        [2,0][2,1][2,2]
        [3,0][3,1][3,2]
    */
    // now to take input in this matrix
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int input;
            cin >> input;
            b[i][j] = input;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    // local array has size limit of 10^5
    // Globally array size has a limit of 10 ^7
}