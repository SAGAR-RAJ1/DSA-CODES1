#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class node {
    public:
    int data;
    node * left;
    node * right;
    int height;

    node(int x){
        data=x;
        height=1;
        left=right=NULL;
    }
};

int getheight(node * root){
    if (!root)
    {
        return 0;
    }
return root->height;

    
}
int getbalance(node* root){
return getheight(root->left)-getheight(root->right);

}

node* insert(node * root,int key){


    //dostnt exist
    if (!root)
    {
        return new node(key);
    }
    

    //exist
    if (root->data>key)
    {
        root->left=insert(root->left,key);
    }
    else if (root->data<key)
    {
        root->right=insert(root->right,key);
    }
    else {
        return root ;//no duplicate allowed
    }
    
    //update height
    root->height=1+max(getheight(root->left),getheight(root->right));

    //balancing
    int balance = getbalance(root);



//left left case
if (balance>1 && key<root->left->data)
{
    /* code */
}

//right right case
//left right case
//right left case












}















int main(){
node * root=NULL;
insert(root,10);

    
    return 0;
}