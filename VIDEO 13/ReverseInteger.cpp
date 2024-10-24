#include<iostream>
using namespace std;
int main()
{

cout<<"Enter the number"<<endl;
int num,a;
cin>>num;
a=num;
int rem,ans=0;

while (a>0)
{
   rem=a%10;
   a=a/10;
   ans=ans*10+rem;

}
cout<<"YOur original number : "<<num<<endl<<"reversed number is :"<<ans;



}