#include <bits/stdc++.h>
using namespace std;
void increment(int &n)
{
    n++;
}
void change(int arr[][4])
{
    arr[0][1] = 7;
}
int main()
{
    int arr[3][4];
    arr[0][1] = 5;
    int a = 3;
    cout << a << endl;
    increment(a);
    cout << a << endl;
    cout << arr[0][1] << endl;
    change(arr);
    cout << arr[0][1] << endl;
    return 0;
}