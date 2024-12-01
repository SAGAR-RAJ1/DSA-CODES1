#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class node {
public:
node * left;
node * right;
int data;
node (int x){
data= x;
left=right = NULL;
}

};

node * insert(node * root ,int value){

if (root==NULL)
{
    node * temp= new node (value);
    return temp;
}
else if (value<root->data)
{
   root->left=insert(root->left,value);


}else{
    root->right=insert(root->right,value);
}

return root;

}
void traverse(node * root){

    if (root==NULL)
    {
        return;
    }
    
    traverse(root->left);
    cout<<root->data<<"  ";
    traverse(root->right);
}

int main(){
    int arr[10]={6,3,17,5,11,18,2,1,20,14};
    node * root=NULL;
    for (int i = 0; i < 10; i++)
    {
       root= insert(root,arr[i]);
    }
traverse(root);
    return 0;
}