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

int find(int * in, int target,int start,int end){
for (int i=start; i <=end; i++)
{
 if (in[i]==target)
 {
    return i;
 }
 
}
return -1;

};


node* tree(int * in,int * pre,int Instart,int Inend, int index) {

    if (Instart>Inend)
    {
        return NULL;
    }
    
node * root=new node(pre[index]);
int position = find(in,pre[index],Instart,Inend);
root->left=tree(in,pre,Instart,position-1,index+1);
root->right=tree(in,pre,position+1,Inend,index+(position-Instart)+1);

return root;

}
void transverse(node *root)
{
    if (root == NULL)
    {
        return;
    }

    
    // left
    transverse(root->left);
   
    //root
    cout << "  " << root->data;
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