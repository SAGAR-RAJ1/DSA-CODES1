#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

node *BINARYTREE()
{

    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    node *temp = new node(x);
    cout << "Enter the left child of " << x << " : ";
    // left side
    temp->left = BINARYTREE();
    // right side
    cout << "Enter the right child of " << x << " : ";
    temp->right = BINARYTREE();

    return temp;
}

int main()
{
cout<<"enter the root element ";
node * root = BINARYTREE();
    return 0;
}