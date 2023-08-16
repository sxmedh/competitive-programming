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

node *LCA(node *curr, int n1, int n2)
{
    if ((curr->data == n1 || curr->data == n2) || (curr->data > n1 && curr->data < n2))
    {
        return curr;
    }
    if (curr->data < n1 && curr->data > n2)
    {
        return curr;
    }
    if (curr->data < n1 && curr->data < n2)
    {
        LCA(curr->right, n1, n2);
    }
    LCA(curr->left, n1, n2);
}

int main()
{

    int n = 7;
    int arr[] = {5, 3, 7, 2, 4, 6, 8};
    int value;
    for (int i = 0; i < n; i++)
    {
        insertNode(arr[i]);
    }
    cout << "Inorder" << endl;
    inorder(root);
    cout << endl;
    node *answer = LCA(root, 2, 3);
    if (answer != NULL)
        cout << "Common ancestor: " << answer->data;
    else
        cout << "NO";
}