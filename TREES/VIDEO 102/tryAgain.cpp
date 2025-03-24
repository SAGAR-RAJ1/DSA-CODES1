#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

class Node{
     public:
    int data;
    Node * left;
    Node * right;

   
    Node(int x){
        data = x;
        left=right= NULL;
    }

};


int main(){

    int x,left,right;
     
    queue<Node*>q;
    cout<<"Enter the root element : ";
    cin>>x;
    Node * root = new Node(x);
    q.push(root);

    while (!q.empty())
    {
        Node * temp = q.front();
        q.pop();
        cout<<"Enter the left element of "<<temp->data<<" : ";
        cin>>left;
        if (left!=-1)
        {
            temp->left= new Node(left);
            q.push(temp->left);
        }
        cout<<"Enter the right element of "<<temp->data<<" :  ";
        cin>>right;
        if (right!=-1)
        {
            temp->right= new Node(right);
            q.push(temp->right);
        }
         
    }
    
    
    return 0;
}