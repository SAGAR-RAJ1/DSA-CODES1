#include<iostream>
using namespace std;
int main()
{

cout<<"Enter the number"<<endl;
int year;
cin>>year;


if (year%400==0)
{
    /* code */
    cout<<"leap year";
    return 0;
}
else if (year%4==0 && year%100!=0)
{
    /* code */
    cout<<"leap year";
    return 0;
}
else{
    cout<<"not a leap year";
}



}