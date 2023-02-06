#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "hello";
    cout << str << endl;
    // cin breaks at line or spaces
    string str2 = "world";
    string result = str + str2;
    cout << result << endl;
    cout << str[2] << endl;
    // double quotes are string ""
    // single quotes are charachters ''
    cout << str.size() << endl;
    string str3;
    getline(cin, str3);
    cout << str3 << endl;
    // cin breaks at /n or new spaces
    //  getline takes the input from the cursor is placed
    cin.ignore();
    // by using cin.ignore the cursor is shifted to the next line
    string s;
    for (int i = 0; i < 5; i++)
    {
        s.push_back('a');
    }
    cout << s << endl;
}