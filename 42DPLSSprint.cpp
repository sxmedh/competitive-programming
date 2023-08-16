#include <bits/stdc++.h>

using namespace std;

const int N = 10e3;

int matrix[N][N];

int main()
{
    string one = "abcde";
    string two = "ace";
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
    int len = matrix[0][0];
    string str = "";
    for (int k = 0; k < len; k++)
    {
        str += "$"; // dummy string
    }

    while (len)
    {
        if (one[one_length - 1] == two[two_length - 1])
        {
            str[len - 1] = one[one_length - 1];
            len--;
            one_length--;
            two_length--;
        }
        else if (one[one_length - 1] > two[two_length - 1])
        {
            one_length--;
        }
        else
        {
            two_length--;
        }
    }
    cout << str << endl;
}