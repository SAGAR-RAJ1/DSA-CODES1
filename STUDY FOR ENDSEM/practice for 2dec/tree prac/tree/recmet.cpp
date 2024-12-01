#include <iostream>
#include <algorithm>
#include <vector>

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

node * tree(){
    int x;
    cin>>x;
    if (x==-1)
    {
        return NULL;
    }

    node * temp= new node(x);
    //left
    cout<<"enter left value of "<<temp->data<<" : ";
    temp->left=tree();
    cout<<"enter right value of "<<temp->data<<" : ";
    temp->right=tree();


    return temp;
}

int main(){
    cout<<"entert root node ";
    node * root;
    root=tree();
    return 0;
}

/*

                                         1
                          2               
                 3

*/