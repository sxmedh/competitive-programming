#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}
int main()
{
    cout << "enter a number" << endl;
    int n;
    cin >> n;
    cout << "the factorial of n is: " << factorial(n) << endl;
}