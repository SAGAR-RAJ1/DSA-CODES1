#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void insert(node *head, int value, int position)
{

    node *ptr = head;
    node *p = new node(value);
    while (--position)
    {
        ptr = ptr->next;
    }

    p->prev = ptr;
    p->next = ptr->next;
    ptr->next->prev = p;
    ptr->next = p;
}
void display(node *head)
{
    node *trans = head;
    while (trans)
    {
        cout << trans->data << "  ";
        trans = trans->next;
    }
    cout << endl;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    node *head = NULL;
    node *tail = NULL;

    for (int i = 0; i < 5; i++)
    {

        if (head == NULL)
        {
            head = new node(arr[i]);
            tail = head;
        }
        else
        {

            node *temp = new node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    display(head);
    insert(head, 32,2);
    display(head);

    // code to add at any point

    return 0;
}