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

int pos(int * in , int start,int end,int target){

    for (int i = start; i <=end ; i++)
    {
        if (in[i]==target)
        {
            return i;
        }
        
    }
    return -1;
}
node * construct(int * in,int * pre, int instart ,int inend,int index){

if (instart>inend)
{
    return NULL;
}
node * root = new node(pre[index]);
int position= pos(in,instart,inend,pre[index]);
//left
root->left=construct(in,pre,instart,position-1,index+1);
root->right=construct(in,pre,position+1,inend,index+(position-instart)+1);

return root;
}
void transverse(node *root)
{
    if (root == NULL)
    {
        return;
    }

     //root
    cout << "  " << root->data;
    // left
    transverse(root->left);
   
   
     // right
    transverse(root->right);
}


int main(){
    

int pre[]={1,2,4,5,8,9,3,6,7,10};
int in[]={4,2,8,5,9,1,6,3,7,10};


node * root;
root=construct(in,pre,0,9,0);

transverse(root);

    return 0;
}