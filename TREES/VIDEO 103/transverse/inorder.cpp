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

    
    // left
    transverse(root->left);
   
    //root
    cout << "  " << root->data;
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



                        //                   1
                        //       2                        9
                        //     3  -1                   8    -1     
                        //  -1   5                   7   -1
                   //                              -1  2
                   //                                 -1 -1