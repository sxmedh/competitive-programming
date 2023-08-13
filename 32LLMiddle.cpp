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
node *root;
void insertInMiddle(int target, int value)
{
    node *ptr = root;
    for (int i = 0; i < target; i++)
    {
        ptr = ptr->next;
    }
    if (ptr->next == NULL)
    {
        ptr->next = new node(value);
    }
    else
    {
        node *temp = ptr->next;
        node *tp = new node(value);
        ptr->next = tp;
        tp->next = temp;
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
    root = NULL;
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
    int target;
    cin >> target >> value;
    insertInMiddle(target, value);
    ptr = root;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}