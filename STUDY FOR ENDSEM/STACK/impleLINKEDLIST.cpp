#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//create linked list
class node{
  public:
    int data;
    node * next;
  
    node(int x){
        data=x;
        next=NULL;
    }

};
   class stack{ 
    int size;
    node *top;
    public:
    stack(){
        size=0;
        top=NULL;
    }
    bool isempty(){
        return top==NULL;
    }

    void push(int x){

          node * temp=new node(x);
           temp->next = top;
            top = temp;

          size++;
    }

    void pop(){
        if (isempty())
        {
            cout<<"stack is empty"<<endl;
        }
        else{
            int temp=top->data;
            top=top->next
            ;
            size--;
            cout<<"pooped element is "<<temp<<endl;
        }
    }
   };
int main(){
    stack a;
    cout<<a.isempty()<<endl;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
        cout<<a.isempty()<<endl;
    a.pop();
    a.pop();
    a.pop();
    a.pop();
        cout<<a.isempty()<<endl;
    
    
    
        return 0;
}