#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    node *next = NULL;
    int data = 0;
    node(int data)
    {
        this->data = data;
    }
};

node *root = NULL;

void removeDuplicates()
{
    node *ptr = root;
    while (ptr->next != NULL)
    {
        if (ptr->data == ptr->next->data)
        {
            ptr->next = ptr->next->next;
        }
        else
        {
            ptr = ptr->next;
        }
    }
}

int main()
{
    cout << "Enter the number of nodes" << endl;
    int n;
    cin >> n;
    cout << "enter values" << endl;
    int value;
    cin >> value;
    root = new node(value);
    for (int i = 0; i < n - 1; i++)
    {
        node *ptr = root;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        cin >> value;
        ptr->next = new node(value);
    }
    cout << "The Linked List is: " << endl;
    node *ptr = root;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    removeDuplicates();
    ptr = root;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}