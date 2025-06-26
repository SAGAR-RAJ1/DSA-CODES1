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
        left = right = NULL;
    }
};


class Solution {
  public:

  
    int height(Node* node) {
        // code here
        if(node==NULL)return -1;//aise 0 hona chahiye gfg m start 0 se kiya h toh ek height km mngta hai
        
        int l=height(node->left);
        int r=height(node->right);
        
        return 1+max(l,r);
    }
};


int main(){
    
    return 0;
}