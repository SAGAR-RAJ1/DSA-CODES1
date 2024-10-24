#include <iostream>
using namespace std;
int main()
{
 cout<<"Enter the number you want to make factorial"<<endl;
 int n,i,r=1;
 cin>>n;
 for ( i = 1; i <=n; i++)
 {
    r=r*i;
 }
 cout<<r;

}
