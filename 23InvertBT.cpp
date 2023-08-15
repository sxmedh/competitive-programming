#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    node *left;
    node *right;
    int data;
    node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};
node *root = NULL;

node *createNode(int value)
{
    node *temp = new node(value);
    return temp;
}
void insertNode(int value)
{
    node *temp = createNode(value);
    if (root == NULL)
    {
        root = temp;
        return;
    }
    node *ptr = root;
    while (ptr != NULL)
    {
        if (value <= ptr->data)
        {
            if (ptr->left == NULL)
            {
                ptr->left = temp;
                break;
            }
            ptr = ptr->left;
        }
        else
        {
            if (ptr->right == NULL)
            {
                ptr->right = temp;
                break;
            }
            ptr = ptr->right;
        }
    }
}

void inorder(node *curr)
{
    if (curr == NULL)
    {
        return;
    }
    inorder(curr->left);
    cout << curr->data << " ";
    inorder(curr->right);
}
void invertBST(node *curr)
{
    if (curr == NULL)
    {
        return;
    }
    node *temp = curr->left;
    curr->left = curr->right;
    curr->right = temp;
    invertBST(curr->left);
    invertBST(curr->right);
}

int main()
{

    int n = 7;
    int arr[] = {4, 2, 7, 1, 3, 6, 9};
    int value;
    for (int i = 0; i < n; i++)
    {
        insertNode(arr[i]);
    }
    cout << "Inorder" << endl;
    inorder(root);
    invertBST(root);
    cout << endl;
    cout << "After inversion: " << endl;
    inorder(root);
}