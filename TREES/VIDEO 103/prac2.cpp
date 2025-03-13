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
node *binarytree()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }

    node *temp = new node(x);
    // left ja
    cout << "enter the left side value of " << x << "  : ";
    temp->left = binarytree();
    // right ja
    cout << "enter the right side value of " << x << "  : ";
    temp->right = binarytree();

    return temp;
}

int main()
{

    cout << "enter the value of root node ";
    node *root = binarytree();

    return 0;
}