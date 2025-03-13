#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
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

int main()
{
    queue<node *> q;
    cout << "Enter the root element " << endl;
    int x;
    cin >> x;
    node *root = new node(x);
    q.push(root);
    int left, right;
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "enter left side value of "<<temp->data << " : ";
        cin >> left;

        //[phle left create kro]
        if (left != -1)
        {
            temp->left = new node(left);
            q.push(temp->left);
        }
        cout << "enter right side value of "<<temp->data << " : ";
        cin >> right;
        if (right != -1)
        {
            temp->right = new node(right);
            q.push(temp->right);
        }
    }

    return 0;
}