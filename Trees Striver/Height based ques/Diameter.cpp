#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}


class Solution {
  public:
    int height(Node* root,int & res) {
        // Your code here
        if(root==NULL) return 0;
        
        int left=height(root->left,res);
        int right= height(root->right,res);
        
        res=max(res,left+right);
        
        return 1+max(left,right);
        
    }
    int diameter(Node* root) {
        // Your code here
        int res=0;
        int h = height(root,res);
        return res;
    }
};


int main(){
    
    return 0;
}