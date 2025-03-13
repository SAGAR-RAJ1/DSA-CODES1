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
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int data)
    {

        if (top >= size-1)
        {
            cout << "stack over flow" << endl;
        }
        else
        {  top++;
            arr[top] = data;
            cout << "pushed element is " << arr[top] << endl;
          
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack under flow" << endl;
        }
        else
        {
            cout << "pooped element is " << arr[top] << endl;
            top--;
        }
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "stack under flow" << endl;
        }
        else
        {
            cout << "peeked element is " << arr[top] << endl;
        }
    }
    void isSize()
    {
        if (top == -1)
        {
            cout << "stack is empty size 0" << endl;
        }
        else
        {
            cout << "size is:" << top + 1 << endl;
        }
    }
    void isEmpty(){
        if (top == -1)
        {
            cout << "empty" << endl;
        }
        else
        {
            cout << "contain some element" << endl;
  
        }
    }
};

int main()
{
  stack s(5);
  s.push(1);
  s.push(2);
  s.push(3);
  s.pop();

s.peek();
  s.pop();
s.peek();
  s.pop();
s.peek();
  s.pop();
s.peek();



    return 0;
}