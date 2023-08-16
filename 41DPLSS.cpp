#include <bits/stdc++.h>

using namespace std;

const int N = 10e3;

int matrix[N][N];

int main()
{
    string one = "abcde";
    string two = "ade";
    int one_length = one.length();
    int two_length = two.length();
    for (int i = one_length - 1; i >= 0; i--)
    {
        for (int j = two_length - 1; j >= 0; j--)
        {
            if (one[i] == two[j])
            {
                matrix[i][j] = 1 + matrix[i + 1][j + 1];
            }
            else
            {
                matrix[i][j] = max(matrix[i + 1][j], matrix[i][j + 1]);
            }
        }
    }
    for (int i = 0; i < one_length; i++)
    {
        for (int j = 0; j < two_length; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "length of Longest substring is: " << matrix[0][0] << endl;
}