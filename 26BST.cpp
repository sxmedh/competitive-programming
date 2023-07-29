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

void preorder(node *curr)
{
    if (curr == NULL)
    {
        return;
    }
    cout << curr->data << " ";
    preorder(curr->left);
    preorder(curr->right);
}

void postorder(node *curr)
{
    if (curr == NULL)
    {
        return;
    }
    postorder(curr->left);
    postorder(curr->right);
    cout << curr->data << " ";
}
queue<node *> q;
void bfs(node *curr)
{
    q.push(curr);
    while (!q.empty())
    {
        if (q.front()->left != NULL)
        {
            q.push(q.front()->left);
        }
        if (q.front()->right != NULL)
        {
            q.push(q.front()->right);
        }
        cout << q.front()->data << " ";
        q.pop();
    }
}

bool searchNode(node *curr, int value)
{
    // Base case: If the root is NULL or the value is found in the current node.
    if (curr == NULL || curr->data == value)
    {
        return (curr != NULL); // Return true if the value is found, false otherwise.
    }

    // If the value is less than the current node's data, search in the left subtree.
    if (value < curr->data)
    {
        return searchNode(curr->left, value);
    }
    // If the value is greater than the current node's data, search in the right subtree.
    else
    {
        return searchNode(curr->right, value);
    }
}

node *findMin(node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

node *deleteNode(node *root, int value)
{
    if (root == NULL)
    {
        return root; // Value not found, return the original root.
    }

    // If the value to be deleted is less than the root's value, search in the left subtree.
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    // If the value to be deleted is greater than the root's value, search in the right subtree.
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    // If the value is found, this is the node to be deleted.
    else
    {
        // Case 1: Node with one or no child.
        if (root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }

        // Case 2: Node with two children.
        // Find the in-order successor (minimum value node in the right subtree).
        node *temp = findMin(root->right);

        // Copy the value of the in-order successor to the current node.
        root->data = temp->data;

        // Delete the in-order successor.
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main()
{

    int n = 9;
    int arr[] = {5, 4, 6, 3, 7, 2, 8, 1, 9};
    int value;
    for (int i = 0; i < n; i++)
    {
        insertNode(arr[i]);
    }
    cout << "Inorder" << endl;
    inorder(root);
    cout << endl;
    cout << "Preorder" << endl;
    preorder(root);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(root);
    cout << endl;
    cout << "BFS" << endl;
    bfs(root);
    cout << endl;
    cout << "enter the node value to be found" << endl;
    // cin >> value;
    cout << searchNode(root, 4);
    cout << endl;
    cout << "enter the value of the node to be deleted" << endl;
    int valueToDelete = 4;
    root = deleteNode(root, valueToDelete);
    inorder(root);
}