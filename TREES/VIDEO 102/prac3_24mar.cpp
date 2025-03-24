#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
// Implemeting tree date - 24 march 2025
using namespace std;

// make the node
class Node
{   
    public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int main()
{

    int y,left,right;
    queue<Node*>q;
   cout<<"Enter the root element of the Tree : ";
   cin>>y;
   Node * root = new Node(y);
   q.push(root);
   while (!q.empty())   
   {
    Node * temp = q.front();
    q.pop();
    
    cout<<"Enter the left node the "<<temp->data<<" : ";
    cin>>left;
    if (left!=-1)
    {
        temp->left=new Node(left);
        q.push(temp->left);
    }
    cout<<"Enter the right node the "<<temp->data<<" : ";
    cin>>right;
    if (right!=-1)
    {
        temp->right=new Node(right);
        q.push(temp->right);
    }
    
    
   }
   


    return 0;
}

//visualisation
/*                           1
                    2                  3
              4           5        6       -1   
            -1   -1    -1  -1   -1   -1 

*/