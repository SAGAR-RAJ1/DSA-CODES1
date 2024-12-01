#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class node
{ // for implementation using linked list
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
class queue
{
    node * front, * rear;

    int size;
public:
    queue()
    {

        size = 0;
        
        front = rear = NULL;
    }
    bool isempty()
    {
        return front==NULL;
    }
    
    void push(int data)
    {
       
            if (isempty())
            {
                node * temp=new node(data);
                front=rear=temp;
            }
            else
            { node * temp=new node(data);
               rear->next=temp;
               rear=temp;
            }
    
    }
    int pop()
    {
        if (isempty())
        {
            cout << "empty  -> " ;
            return -1;
        }
        else
        {
            node * temp=front;
            front=front->next;
            int s=temp->data;
            delete temp;
            return s;
        }
    }

    int peek()
    {
        if (isempty())
        {
            cout << "empty" << endl;
            return -1;
        }
        else
        {

            return front->data;
        }
    }
};

int main()
{
queue q;

q.push(1);
q.push(15);
q.push(1);
q.push(1561);
q.push(11);

cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
    return 0;
}