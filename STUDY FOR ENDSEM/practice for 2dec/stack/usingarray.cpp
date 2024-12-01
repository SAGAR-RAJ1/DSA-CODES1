#include <iostream>


using namespace std;
class stack{
    int size;
    int top;
    int * arr;
    public:
    stack(int x){
        size=x;
        top=-1;
        arr=new int[x];
    }
    bool isfull(){
        return top==size-1;
    }
    bool isempty(){
        return top==-1;
    }

    void push (int data){
if (isfull())
{
        cout<<"stack is full"<<endl;
      
}else{
    top++;
    arr[top]=data;
}

    }


    int pop(){
        if (isempty())
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            int s=arr[top];
            top--;
            return s;
        }
    }

    int peek(){
                if (isempty())
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
        
         
            return arr[top];
        }
    }
};


int main(){
    stack q(6);
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);
 
    q.push(1354);
    cout<<q.isempty();
    cout<<q.isfull()<<endl;
  cout<<  q.peek();

    return 0;
}