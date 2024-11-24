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
        data = x;
        left=right = NULL;
    }
};

node * insert(node * root,int input){
   
   if (root==NULL)
   {
    node * temp= new node(input);
    return temp;
   }

   //input chota root se
   if (root->data>input)
   {
    root->left=insert(root->left,input);
   }else{
     root->right=insert(root->right,input);
   }
   

   return root;


}

void inorder(node * root){

    if (root==NULL)
    {
        return;
    }
    //left
    inorder(root->left);
    //node
    cout<<root->data<<"  ";
    //right
    inorder(root->right);
    
}

int search(node * root,int target){
    if (root==NULL)
    {
        return -1;
    }
    if (root->data==target)
    {
        return 1;
    }
   
    if (root->data>target)
    {
        search(root->left,target);
    }
    else{
        search(root->right,target);
    }
    
    
}
int main(){


int input[10]={1,5,6,8,4,12,24,56,11,101};

node * root=NULL;
for (int i = 0; i < 10; i++)
{
    root=insert(root,input[i]);
}

inorder(root);
cout<<endl;
cout<<search(root,1);

    return 0;
}