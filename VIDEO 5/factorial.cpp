#include<iostream>
using namespace std;
int main()
{
    cout<<"ENTER THE NUMBER "<<endl;
    int n;
    cin>>n;
    int a=1;
    for (int i = 1; i <=n; i++)
    {
        /* code */

        a=i*a;
    }
    cout<<a;
    
    
    }