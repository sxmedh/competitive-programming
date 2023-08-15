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
                return;
            }
            ptr = ptr->left;
        }
        else
        {
            if (ptr->right == NULL)
            {
                ptr->right = temp;
                return;
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
int heightBT(node *curr)
{
    if (curr == NULL)
    {
        return 0;
    }
    int left = heightBT(curr->left);
    int right = heightBT(curr->right);
    return 1 + max(left, right);
}
int main()
{

    int n = 3;
    int arr[] = {2, 1, 3};
    int value;
    for (int i = 0; i < n; i++)
    {
        insertNode(arr[i]);
    }
    cout << "Inorder" << endl;
    inorder(root);
    cout << endl;
    cout << "height: " << heightBT(root) << endl;
}