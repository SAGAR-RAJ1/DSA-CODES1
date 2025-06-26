#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child*/
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; 
class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int>ansf;
        if(root==NULL)return ansf;
        
        stack<Node *>s;
        stack<int>ans;
        s.push(root);
        while(!s.empty()){
            Node * a= s.top();
            s.pop();
            if(a->left!=NULL) s.push(a->left);
              if(a->right!=NULL) s.push(a->right);
             ans.push(a->data);
        }
        
        while(!ans.empty()){
            ansf.push_back(ans.top());
            ans.pop();
        }
        
        return ansf;
        
    }
};


int main(){
    
    return 0;
}