#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
        value of modulo m is 10^9 + 7
        but you can take any value of modulo
        (a+b) % M = ((a%M)+(b%M))%M
        (a*b) % M = ((a%M)*(b%M))%M
        (a-b) % M = ((a%M)-(b%M)+M)%M
        (a/b) % M = ((a%M)*((b inverse)%M))%M
    */
    // why is this necessary
    // you cant calculate with big numbers
    int M = 47;
    int n = 21;
    cout << "factorial of hundred" << endl;
    long long factorial = 1;
    for (int i = 2; i <= n; ++i)
    {
        factorial = (factorial * i) % M;
        cout << factorial << endl;
    }
    cout << factorial << endl;
}