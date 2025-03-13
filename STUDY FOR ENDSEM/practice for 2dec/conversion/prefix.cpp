#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c ==  '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

string convert(string sp)
{
    stack<char> a;
    string s;

    for (int i = 0; i < sp.length(); i++)
    {
        if ((sp[i] >= 'a' && sp[i] <= 'z') || (sp[i] >= 'A' && sp[i] <= 'Z'))
        {
            s+=sp[i];
        }
        else if (sp[i] == '(')
        {
            a.push(sp[i]);
        }
        else if (sp[i] == ')')
        {
            while (!a.empty() && a.top() != '(')
            {
               s+=a.top();
                a.pop();
            }
            if (!a.empty())
            {

                a.pop();
            }
        }
        else{
            while (!a.empty()  && prec(a.top())>=prec(sp[i]))
            {
                s+=a.top();
                a.pop();
            }

            a.push(sp[i]);
            
        }
    }

    while (!a.empty())
    {
        s+=a.top();
        a.pop();
    }
    

    return s;
}

int main()
{  

 string p = convert("(a-b/c)*(a/k-l)");
    cout << p << endl;
    return 0;
}