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

class stack
{
    int size;
    node *top;

public:
    stack()
    {

        top = NULL;
        size = 0;
    }

    void push(int value)
    {

        node *temp = new node(value);
        if (temp == NULL)
        {
            cout << "heap memory is full " << endl;
        }
        else
        {

            temp->next = top;
            top = temp;
            cout << "element is added : " << top->data << endl;
            size++;
        }
    }
    void pop()
    {

        if (top == NULL)
        {
            cout << "the stack is empty " << endl;
        }
        else
        {
            cout << "element popped is  : " << top->data << endl;
            top = top->next;
            size--;
        }
    }
    void issize()
    {
        cout << "the size of the stack is : " << size << endl;
    }
};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.issize();
    s.pop();
    s.issize();
    s.pop();
    s.issize();
    s.pop();
    s.issize();
    s.pop();
    s.issize();
    s.pop();
    s.issize();
    s.pop();
    s.issize();
    s.pop();


    return 0;
}