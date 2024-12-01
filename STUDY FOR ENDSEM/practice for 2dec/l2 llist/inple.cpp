#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

node *atstart(node *head, int data)
{

    if (head == NULL)
    {
        head = new node(data);
        return head;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
        return head;
    }
}
void traverse(node *head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}

int main()
{

    node *head;
head=NULL;


    head=atstart(head, 1);

   traverse(head);
    return 0;
}