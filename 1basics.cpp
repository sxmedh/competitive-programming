#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << 'c' + 1 << endl;
    double a = 1236433;
    double b = 2344523;
    double c = b / a;
    cout << c << endl;
    cout << setprecision(2) << c << endl;
    // double should be avoided in calculations as
    // double allows us to store large numbers but at a cost of accuracy
}