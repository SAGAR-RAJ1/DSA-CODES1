#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    bool IsEmpty()
    {
        return front == -1;
    }
    bool IsFull()
    {
        return rear == size - 1;
    }

    void push(int value)
    {
        if (IsEmpty())
        {
            front = rear = 0;
            arr[0] = value;
        }
        else if (IsFull())
        {
            cout << "queue is full cant push further " << endl;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }
    void pop()
    {
        if (IsEmpty())
        {
          
        }
        else if (front>rear)
        {
     cout << "queue is empty cant pop further " << endl;
        }
        
        else
        {
            cout << "pooped element is  " << arr[front] << endl;
            front++;
        }
    }
    void peek()
    {
        if (IsEmpty())
        {
            cout << "queue is empty cant peek further " << endl;
        }
        else
        {
            cout << "peeked element is  " << arr[front] << endl;
        }
    }
};

int main()
{
 queue a(5);
 cout<<a.IsEmpty()<<endl;
 cout<<a.IsFull()<<endl;

 a.push(0);
 a.push(1);
 a.push(2);
 a.push(3);

 a.pop();
 a.pop();
 a.pop();
 a.pop();
 a.pop();
 a.pop();

    return 0;
}