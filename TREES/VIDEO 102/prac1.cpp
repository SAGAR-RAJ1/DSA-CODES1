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
    cout << "enter the value of root : ";
    int data;
    cin >> data;
    node *root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();
        cout << "enter the left side's value of " << temp->data << " : ";

        int left;
        cin >> left;
        if (left != -1)
        {
            temp->left = new node(left);
            q.push(temp->left);
        }
        cout << "enter the right side's value of " << temp->data << " : ";
        int right;
        cin >> right;
        if (right != -1)
        {
          temp->right=new node(right);
            q.push(temp->right);
        }
    }

    return 0;
}