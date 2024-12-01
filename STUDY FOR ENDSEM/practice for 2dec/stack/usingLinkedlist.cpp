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
class stack
{
    node *top;
    int size;

public:
    stack()
    {
        top = NULL;
        size = 0;
    }

    bool isempty()
    {
        return top == NULL;
    }

    void push(int data)
    {
        node *temp = new node(data);
        temp->next = top;
        top = temp;
        size++;
    }
    int pop()
    {
        if (top == NULL)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        else
        {
            node *temp = top;
            cout << "popped data " << temp->data;
            int s = temp->data;
            top = top->next;
            delete temp;
        }
    }

    int peek()
    {
        if (top == NULL)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        else
        {

            cout << "peeked data " << top->data;
        }
    }
};

int main()
{

stack q;

cout<<q.isempty()<<endl;q.push(1);
q.pop();
    return 0;
}