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
        return rear == size - 1;
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
                rear++;
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
                front++;
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

            return arr[front];
        }
    }
};

int main()
{
queue q(5);
q.push(2);
q.push(1);
q.push(1);
q.push(1);
q.push(1);

cout<<q.pop();
    return 0;
}