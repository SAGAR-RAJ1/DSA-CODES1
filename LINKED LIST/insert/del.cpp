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

// adding a node at start of linked list
node *atstart(node *head, int data)
{

    if (head == NULL)
    {
        head = new node(data);
    }
    else
    {
        node *temp;
        temp = new node(data);
        temp->next = head;
        head = temp;
    }

    return head;
}

// adding a node at end of linked list

node * addatend(node *head, int data)
{

    if (head == NULL)
    {
        head = new node(data);
    }
    else
    {

        node *ptr = new node(data);
        node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = ptr;
    }
    return head;
}
void transverse(node *head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}
void atindex(node* head,int data,int index){
    node * temp=new node(data);
    node* ptr=head;

      while(--index){
        ptr=ptr->next;

      }

      temp->next=ptr->next;
      ptr->next=temp;


}

int main()
{

    node *head;
    head = NULL;


    head=addatend(head, 0);
    head=addatend(head, 1);
    head=addatend(head, 2);
    head=addatend(head, 3);
    head=addatend(head, 4);
    head=addatend(head, 5);
      atindex(head,69,1);
    transverse(head);

    return 0;
}