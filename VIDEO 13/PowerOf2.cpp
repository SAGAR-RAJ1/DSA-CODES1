#include<iostream>
using namespace std;
int main()
{

cout<<"Enter the number"<<endl;
int num;
cin>>num;

int index=1;
if (num==1)
{
    /* code */
     cout<<"Yes its is the power of two "<<endl;
    cout<<"and the power index is  0 ";
    return 0;
}



else if (num<1)
{
    /* code */
     cout<<"No it not the power of two its a negative number  "<<endl;
     return 0;

}

else{

for (int i = 2; i <= num; i=i*2 )
{
  // cout<<i<<endl;
 
  if (i==num)
  {
    cout<<"Yes its is the power of two "<<endl;
    cout<<"and the power index is   "<<index;
    return 0;
  }
  index++;
}


}

cout<<"not its not a power of 2";










}