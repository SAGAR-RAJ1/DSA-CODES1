#include <iostream>
#include <algorithm>
#include <vector>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;

    node(int x){
        data=x;
        right=left=NULL;
    }
};


int main(){
    
cout<<"enter the value of root node : ";
int x;
cin>>x;
node * root =new node(x);
queue<node * > q;
q.push(root);
int left,right;

while (!q.empty())
{
    node * temp = q.front();
    q.pop();
//left jao
cout<<"enter left value of "<<temp->data<<" : ";
cin>>left;
if (left!=-1)
{   temp->left=new node(left);
     q.push(temp->left);
}
cout<<"enter right value of "<<temp->data<<" : ";
cin>>right; 
if (right!=-1)
{   temp->right=new node(right);
     q.push(temp->right);
}

    
    }


    return 0;
}


/*
                    1
        2                        3
  4

*/









