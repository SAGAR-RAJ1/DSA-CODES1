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

    node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

class Dequeue
{
    node *front;
    node *rear;

public:
    Dequeue()
    {
        front = rear = NULL;
    }
    // push in front
    void pushfront(int x)
    {

        if (front == NULL)
        {
            front = rear = new node(x);
            cout << "pushed element is " << x << endl;
            return;
        }
        else
        {
            node *temp = new node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout << "pushed element is " << x << endl;
            return;
        }
    }
    // push back
    void pushback(int x)
    {

        if (front == NULL)
        {
            front = rear = new node(x);
            cout << "pushed element in the back is " << x << endl;
            return;
        }
        else
        {
            node *temp = new node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            cout << "pushed element in the back  is " << x << endl;
            return;
        }
    }

    // pop in front
    void popFront()
    {

        // empty hai ya nhi
        if (front == NULL)
        {
            cout << "dequeue underflow" << endl;
            return;
        }
        else
        {
            node *temp = front;
            cout << "pooped data from front is " << temp->data << endl;
            front = front->next;
            delete temp;
            if (front)
            {
                front->prev = NULL;
            }
            else
            {
                rear = NULL;
            }
        }
    }
    // pop from back
    void popBack()
    {

        // empty hai ya nhi
        if (front == NULL)
        {
            cout << "dequeue underflow" << endl;
            return;
        }
        else
        {
            node *temp = rear;
            cout << "pooped data from back is " << temp->data << endl;
            rear = rear->prev;
            delete temp;
            if (rear)
            {
                rear->next = NULL;
            }
            else
            {
                front = NULL;
            }
        }
    }
};

int main()
{
    Dequeue q;
    q.pushfront(1);
    q.pushback(2);
    q.pushback(3);
    q.popFront();
    q.popBack();
    q.popBack();

    return 0;
}