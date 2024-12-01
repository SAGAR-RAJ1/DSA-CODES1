#include <iostream>
#include <algorithm>
#include <vector>
#include<queue>
using namespace std;
class node {
    public:
    int data;
    node * left;
    node * right;

    node (int x){
        data=x;
        left=right=NULL;
    }
};


int main(){
    
    queue<node *>q;
    cout<<"enter the root element : ";
    int x;
    cin>>x;
    node * root=new node(x);
    q.push(root);
int left,right;
    while (!q.empty())
    {
        node *  temp=q.front();
        q.pop();
        cout<<"enter the left element of "<<temp->data<<" : ";
        cin>>left;
        if (left!=-1)
        {
            temp->left=new node(left);
            q.push(temp->left);

        }
        cout<<"enter the right element of "<<temp->data<<" : ";
        cin>>right;
        if (right!=-1)
        {
            temp->right=new node(right);
            q.push(temp->right);

        }
        
    }
    

    return 0;
}