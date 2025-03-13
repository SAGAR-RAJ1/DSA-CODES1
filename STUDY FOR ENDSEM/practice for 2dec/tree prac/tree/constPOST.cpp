#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int x)
    {
        data = x;
        right = left = NULL;
    }
};
int find(int *in, int start, int end, int target)
{
    for (int i = start; i <= end; i++)
    {
        if (in[i] == target)
        {
            return i;
        }
    }
    return -1;
}

node *tree(int *in, int *post, int instart, int inend, int index)
{

    if (instart > inend)
    {
        return NULL;
    }
    node *root = new node(post[index]);

    int position = find(in, instart, inend, post[index]);
    root->right = tree(in, post, position + 1, inend, index - 1);
    root->left = tree(in, post, instart, position - 1, index-(inend - position) - 1);

    return root;
}

void traverse(node * root){
    if (root==NULL)
    {
        return;
    }
    traverse(root->left); cout<<root->data<<"  ";
    traverse(root->right);
}
void got(node * root,int target){
 if (root == NULL)
    { 
        return;
    }
    if (root->data==target)
    {
        cout<<"got it";
        return;
    }
   
    got(root->left,target);
    got(root->right,target);
    

    
}
int main()
{
    int in[10] = {4, 2, 6, 5, 7, 1, 10, 8, 9, 3};
    int post[10] = {4, 6, 7, 5, 2, 10, 9, 8, 3, 1};

    node *root;
    root=tree(in,post,0,9,9);

    traverse(root);
    got(root,5);
    return 0;
}