#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//Function for level order traversal

// A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        
        queue<Node *>q;
        q.push(root);
        while(!q.empty()){
            vector<int>add;
            int s = q.size();
            for(int i = 0 ; i<s;i++){
                Node * a = q.front();
                q.pop();
                if(a->left!=nullptr)q.push(root->left);
                  if(a->right!=nullptr)q.push(root->right);
                  add.push_back(a->data);
            }
            ans.push_back(add);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}