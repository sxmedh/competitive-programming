#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter the string:" << endl;
    string str;
    getline(cin, str);
    int a = 0;
    int b = str.size() - 1;
    bool palindrome = true;
    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[a] == str[b])
        {
            a++;
            b--;
        }
        else
        {
            palindrome = false;
            break;
        }
    }
    if (palindrome)
    {
        cout << "string is a palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}