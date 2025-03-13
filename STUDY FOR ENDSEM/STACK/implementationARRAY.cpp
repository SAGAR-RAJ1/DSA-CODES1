#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class stack
{
    int *arr;
    int size;
    int top;

public:
    stack(int x)
    {
        size = x;
        arr = new int[size];
        top = -1;
    }

    bool isempty()
    {
        return top == -1;
    }
    bool isfull()
    {
        return top == size - 1;
    }
    void push(int x)
    {
        if (isfull())
        {
            cout << "the stack is full" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
            cout << "the element " << x << " is added to the stack" << endl;
        }
    }

    void pop()
    {

        if (isempty())
        {
            cout << "cant pop stack is empty" << endl;
        }
        else
        {
            int temp = arr[top];
            top--;
            cout << "the element " << temp << " is pooped from the stack" << endl;
        }
    }

    void peek(){
          if (isempty())
        {
            cout << "cant peek stack is empty" << endl;
        }
        else
        {
            
           
            cout << "the element " << arr[top]<< " is peeked from the stack" << endl;
        }
    }
};

int main()
{
    stack a(5);
    a.push(1);
 cout<<a.isempty()<<endl;
    a.peek();
   a.pop();
    cout<<a.isempty()<<endl;
    return 0;
}