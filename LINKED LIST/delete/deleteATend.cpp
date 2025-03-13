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

void deleteatend(node*head){
if (head==NULL)
{
cout<<"empty"<<endl;
}
else{

    node* ptr=head;
    node* p=head->next;
    while (p->next!=NULL)
    {
        ptr=ptr->next;
        p=p->next;
    }
    delete(p);
    ptr->next=NULL;
    
}}

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
            temp->next = head;
            head = temp;
        }
    }
transverse(head);
deleteatend(head);
transverse(head);
deleteatend(head);
transverse(head);
deleteatend(head);
transverse(head);
deleteatend(head);
transverse(head);
deleteatend(head);
transverse(head);
    return 0;
}