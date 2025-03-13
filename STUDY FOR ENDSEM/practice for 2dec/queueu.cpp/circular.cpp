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
    int front, rear;
    int *arr;
    int size;
public:
    queue(int x)
    {

        size = x;
        arr = new int[x];
        front = rear = -1;
    }
    bool isempty()
    {
        return front == -1;
    }
    bool isfull()
    {
        return (rear+1)%size==front;
    }
    void push(int data)
    {
        if (isfull())
        {
            cout << "full" << endl;
        }
        else
        {
            if (isempty())
            {
                rear = front = 0;
                arr[front] = data;
            }
            else
            {
                rear=(rear+1)%size;
                arr[rear] = data;
            }
        }
    }
    int pop()
    {
        if (isempty())
        {
            cout << "empty" << endl;
            return -1;
        }
        else
        {
            if (front == rear)
            {
                int s = arr[front];
                rear = front = -1;
                return s;
            }
            else
            {
                int s = arr[front];
                rear++;
                return s;
            }
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

            return arr[rear];
        }
    }
};

int main()
{
queue q(5);


cout<<q.pop();
    return 0;
}