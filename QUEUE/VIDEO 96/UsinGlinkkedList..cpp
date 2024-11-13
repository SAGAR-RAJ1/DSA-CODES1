#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int n)
    {
        data = n;
        next = NULL;
    }
};
class queue
{

    node *front;
    node *rear;

public:
    queue()
    {
        front = rear = NULL;
    }
    //check empty r not
    bool empty()
    {
        return front == NULL;
    }
    /// push
    void push(int value){
      
      if (empty())
      {  
        front=rear=new node(value);
         cout<<"pushed element is "<<value<<endl;
      }else{
        rear->next=new node(value);
        rear=rear->next;cout<<"pushed element is "<<rear->data<<endl;
      }
      
    }
    //pop
    void pop(){
        if (empty())
        {
            cout<<"the queue is empty "<<endl;
        }else{
            node * temp=front;
            cout<<"pooped element is "<<front->data<<endl;
            front=front->next;
            delete temp;

        }
        
    }
};

int main()
{
queue a;
a.push(1);
a.pop();
    return 0;
}