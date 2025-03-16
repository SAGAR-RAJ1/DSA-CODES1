#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

int main(){


Node * head=new Node();
Node * second = new Node();
Node * third = new Node();
Node * fourth = new Node();
Node * fifth = new Node();

head->data = 1;
head->next = second;
second->data=2;
second->next=third;
third->data=3;
third->next=fourth;
fourth->data=4;
fourth->next=fifth;
fifth->data=5;

fifth->next=NULL;


  // Traverse the linked list
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;  cout << endl;
    }
  

    // // Clean up memory
    // delete head;
    // delete second;




    return 0;
}