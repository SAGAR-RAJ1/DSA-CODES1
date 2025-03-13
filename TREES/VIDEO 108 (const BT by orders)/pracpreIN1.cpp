#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class node {

    public:
    int data;
    node * left;
    node * right;

    node(int x){
        data=x;
        left = right= NULL;
    }
};

int find(int * in , int target , int instart , int inend){

    for (int i = instart; i <= inend; i++)
    {
        if (in[i]==target)
        {
            return i;
        }
        
    }
    return -1;
}
node * tree(int * in , int * pre , int instart , int inend , int index ){

if (instart>inend)
{
    return NULL;

}
node * root = new node(pre[index]);
int position = find(in,pre[index],instart,inend);
root->left=tree(in,pre,instart,position-1,index+1);
root->right=tree(in,pre,position+1,inend,index+(position-instart)+1);


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
node * root= tree(in,pre,0,9,0);
transverse(root);
    return 0;
}