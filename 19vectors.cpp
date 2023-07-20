#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5;
    vector<int> vec;
    cout << "Enter 5 digits" << endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    vector<int>::iterator ptr;
    for (ptr = vec.begin(); ptr != vec.end(); ptr++)
    {
        cout << "*ptr value " << *ptr << endl;
    }
    cout << "&it values " << endl
         << endl;
    for (auto it : vec)
    {
        cout << &it << endl;
    }
    cout << "it values " << endl
         << endl;
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "max_element " << *max_element(vec.begin(), vec.end()) << endl;
    auto it = max_element(vec.begin(), vec.end());
    cout << &it << endl;
    cout << "min_element " << *min_element(vec.begin(), vec.end()) << endl;
    it = min_element(vec.begin(), vec.end());
    cout << &it << endl;
    cout << "For sorting -> sort(vec.begin(), vec.end())" << endl;
    sort(vec.begin(), vec.end());
    cout << "Enter element to find" << endl;
    cin >> n;
    vector<int>::iterator f = find(vec.begin(), vec.end(), n);
    cout << "value " << *f << endl;
    cout << f - vec.begin() << endl;
}