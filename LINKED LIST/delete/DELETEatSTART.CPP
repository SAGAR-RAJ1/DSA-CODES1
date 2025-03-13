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
head=deleteatstart(head);
transverse(head);
head=deleteatstart(head);
transverse(head);
head=deleteatstart(head);
transverse(head);
head=deleteatstart(head);
transverse(head);
head=deleteatstart(head);

    return 0;
}