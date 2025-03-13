#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
class queue
{
    stack<int> s1;
    stack<int> s2;

public:
    queue() {

    };

    // empty hai ya nhi
    bool Isempty()
    {
        return s1.empty() && s2.empty();
    }
    // push we use s1 for this
    void push(int data)
    {

        s1.push(data);
    }
    // pop for this use s2
    int pop()
    {
        // agar empty hai
        if (Isempty())
        {
            cout << "queue is empty cant pop " << endl;
            return 0;
        }
        else if (!s2.empty())
        {
            int element = s2.top();
            s2.pop();
             cout << "pooped element is "<<element << endl;
            return element;
        }
        else
        {

            while (!s1.empty())
            {
                int element = s1.top();
                s2.push(element);
                s1.pop();
            }
            int element = s2.top();
            s2.pop();
                cout << "pooped element is "<<element << endl;
            return element;
        }
    }
    // peekk krna h ab boys fav part
    //  peek yani s2 k first element
    int peek()
    {
        if (Isempty())
        {
            cout << "queue is empty cant peek " << endl;
            return 0;
        }
        else if (!s2.empty())
        {
            int element = s2.top();
            cout << "queue  peeked element is  " << element << endl;
            return element;
        }
        else
        {

            while (!s1.empty())
            {
                int element = s1.top();
                s2.push(element);
                s1.pop();
            }
            int element = s2.top();
            cout << "queue  peeked element is  " << element << endl;
            return element;
        }
    }
};

int main()
{
  queue q;
  q.push(2);
 cout<< q.Isempty()<<endl;
 q.pop();
 cout<< q.Isempty();

    return 0;
}