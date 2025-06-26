#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
// A binary tree node has data, pointer to left child
  // and a pointer to right child


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution {
  public:

    // Function to return a list containing the preorder traversal of the tree.
    vector<int> preorder(Node* root) {
        // write code here
        vector<int>ans;
        if(root==NULL)return ans;
        
        stack<Node*>s;
        s.push(root);
        while(!s.empty()){
            Node * a = s.top();
            s.pop();
            ans.push_back(a->data);
            if(a->right!=NULL)s.push(a->right);
              if(a->left!=NULL)s.push(a->left);
              
        }
        return ans;
    }
};


int main(){
    
    return 0;
}