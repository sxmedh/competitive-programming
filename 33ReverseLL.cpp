#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    node *next = NULL;
    node *reverse = NULL;
    int data = 0;
    node(int data)
    {
        this->data = data;
    }
};
node *root = NULL;

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
    node *previous = NULL;
    node *current = root;
    node *mynext = root->next;
    while (current != NULL)
    {
        current->next = previous;

        previous = current;
        current = mynext;
        if (mynext != NULL)
        {
            mynext = mynext->next;
        }
    }
    root = previous;
    ptr = root;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}