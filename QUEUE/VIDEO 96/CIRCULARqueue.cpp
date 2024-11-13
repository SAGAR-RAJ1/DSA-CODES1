#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class queue
{
    int *arr;
    int front, rear;
    int size;

public:
    queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    // if queue is empty or not;
    bool isEmpty()
    {
        return front == -1;
    }
    // full
    bool isFull()
    {
        return  ( rear+1)%size == front;
    }

    // push element in to queue
    void push(int data)
    {
        if (front == rear)
        {
            front = rear = 0;
            arr[0] = data;
        }
        else if (rear == size - 1)
        {
            cout << "queue is full cant push" << endl;
        }
        else
        {
            rear=( rear+1)%size;
            arr[rear] = data;
        }
    }
    // for popping
    void pop()
    {
        if (front == -1)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            if (front == rear)
            {
                cout << "pooped element is " << arr[front] << endl;
                front = rear = -1;
            }
            else
            {
                cout << "pooped element is " << arr[front] << endl;
                front=( front+1)%size;
            }
        }
    }
    // starting element
    void peek()
    {
        if (front == -1)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            cout << "peeked element is " << arr[front] << endl;
        }
    }
};

int main()
{

   queue a(5);
   a.push(1);
   cout<<a.isEmpty();
   a.pop();
cout<<a.isEmpty();
a.pop();
    return 0;
}