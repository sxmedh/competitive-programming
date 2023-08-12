#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
    }
};
int main()
{
    node obj1(1);
    cout << obj1.data << " obj1.data " << endl;
    cout << &obj1 << " &obj1 " << endl;
    cout << obj1.next << " obj.next " << endl;
    node *ptr = new node(2);
    cout << ptr->data << " ptr.data " << endl;
    cout << &ptr << " &ptr " << endl;
    cout << ptr->next << " ptr.next " << endl;
}