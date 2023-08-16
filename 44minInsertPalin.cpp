#include <bits/stdc++.h>

using namespace std;

const int N = 10e3;
int matrix[N][N];

int main()
{
    string str1 = "abcaa";
    string str2 = "aacba";
    for (int i = str1.length() - 1; i >= 0; i--)
    {
        for (int j = str2.length() - 1; j >= 0; j--)
        {
            if (str1[i] == str2[j])
            {
                matrix[i][j] = 1 + matrix[i + 1][j + 1];
            }
            else
            {
                matrix[i][j] = max(matrix[i + 1][j], matrix[i][j + 1]);
            }
        }
    }
    cout << "Minimum insertion to make string a palindrome: " << str1.length() - matrix[0][0];
}