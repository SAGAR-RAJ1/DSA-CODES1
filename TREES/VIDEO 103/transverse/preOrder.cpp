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

void transverse(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << "  " << root->data;
    // left
    transverse(root->left);
    // right
    transverse(root->right);
}

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
    cout << "enter the root element ";
    node *root = BINARYTREE();

    transverse(root);                 
    return 0;
}



                        //          1
                        //       2      5
                        //     3  -1   -1   6
                        //  -1   -1        -1  -1