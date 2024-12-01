#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

node * deleteatstart(node*head){

    node* ptr=head;
    head=head->next;
    delete(ptr);
    return head;
}

void transverse(node *head)
{
if (head==NULL)
{
    cout<<"nothing is present"<<endl;
}
else{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout<<endl;
}}
void deleteATindex(node * head,int index){
    node* ptr=head;
    node* p=head->next;
    while (--index)
    {
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=p->next;
    delete p;
}
node * rev(node* head){

    node * pre=NULL;
    node * next=head->next;
    node * curr=head;


    while (curr!=NULL)
    {
     curr->next=pre;
     pre=curr;
     curr=next;
  next=next->next;


    }
    
  return pre;
}


int main()
{

    int a[5] = {1, 2, 3, 4, 5};
    node *head;
    head = NULL;

    for (int i = 0; i < 5; i++)
    {

        // linked list doesnt exist
        if (head == NULL)
        {
            head = new node(a[i]);
        }
        else
        {
            node *temp;
            temp = new node(a[i]);

            // temp->data=a[i];
          node * ptr=head;
          while (ptr->next!=NULL)
          {
            ptr=ptr->next;
          }
          ptr->next=temp;
          
        }
    }
    
    transverse(head);
    head=rev(head);
    transverse(head);

    return 0;
}