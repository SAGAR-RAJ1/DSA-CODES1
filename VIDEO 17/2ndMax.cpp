#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[8]={5,68,15,4554,65,0,1523,101};


int a=INT16_MIN, b=INT16_MIN;
for (size_t i = 0; i < 8; i++)
{
    /* code */if (a<arr[i])
    {
         a=arr[i];
    }
    
}

for (size_t i = 0; i < 8; i++)
{

    if (arr[i]!=a)
    { 

  if (b<arr[i])
    {
         b=arr[i];
    }



    }
    
}


cout<<a<<endl;
cout<<b;







}