#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
class stack
{
    queue<int> q1;
    queue<int> q2;

public:
    stack() {

    };

    // empty hai ya nhi
    bool Isempty()
    {
        return q1.empty() && q2.empty();
    }
    // push we use s1 for this
    void push(int x)
    {
           if (Isempty())
           {
            q1.push(x);
           }
           else if (q1.empty())
           {
            q2.push(x);
           }else{
              q1.push(x);
           }
           
           
        
    }
    // pop for this use s2
    int pop()
    {
        // agar empty hai
        if (Isempty())
        {
         
            return 0;
        }
        else if (q1.empty())
        {
          while (q2.size()>1)
          {
             q1.push(q2.front());
             q2.pop();
          }
              int element = q2.front();
          q2.pop();
          return element;  
          
        }else{
            while (q1.size()>1)
          {
             q2.push(q1.front());
             q1.pop();
          }
          int element = q1.front();
          q1.pop();
          return element;
        }

    }
    // peekk krna h ab boys fav part
    //  peek yani s2 k first element
    int peek()
    {
         if (Isempty())
        {
          
            return 0;
        }
        else if (q1.empty())
        {
     
          return q2.back();
          
        }else{
          
          return q1.back();
        }
    }
};

int main()
{
  stack q;
  q.push(2351);
 cout<< q.Isempty()<<endl;
 cout<<q.pop()<<endl;
 cout<< q.Isempty();

    return 0;
}