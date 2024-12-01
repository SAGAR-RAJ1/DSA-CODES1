#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class queue
{
    int *arr;
    int front, rear, size;

public:
    queue(int x)
    {
        size = x;
        arr = new int[x];
        front = rear = -1;
    }
    bool isfull(){
        return rear==size-1;
    }
    bool isempty(){
return front==-1;
    }
    void push(int x){
        if (isfull())
        {
            cout<<"cant push queue is full"<<endl;
        }
        else if (isempty()){
             front=rear=0;
             arr[0]=x;
        }else{
            rear++;
            arr[rear]=x;
        }
    }
    void pop(){

        
        if (isempty()){
              cout<<"cant push queue is empty"<<endl;
        }
          else if (front>rear)
        {
     cout << "queue is empty cant pop further " << endl;
        }else{
            cout << "pooped element is "<<arr[front] << endl;
            front++;
        }
    }
};

int main()
{

    queue q(5);q.pop();
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     q.push(5);
     
     q.pop();
     q.pop();
     q.pop();
     q.pop();
 
     q.pop();
     q.pop();
     q.pop();
     q.pop();
 

    return 0;
}