#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
// going to solve this useig recirsion # machayenge
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
node *binaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    node *temp = new node(x);
    // left jao
    cout << "enter the left value of " << x << " : ";
    temp->left = binaryTree();
    // right jao
    cout << "enter the right value of " << x << " : ";
    temp->right = binaryTree();
}
int main()
{
    cout << "enter the value of the root  : ";

    node *root = binaryTree();

    return 0;
}



                     










