#include<iostream>
using namespace std;
int main(){


int arr[5]={10,4,3,2,8};

for (int i = 0; i < 5; i++)
{
    for (int j = i; j<5; j++)
    {
      if (arr[i]>arr[j])
      {
        /* code */
        swap(arr[i],arr[j]);
      }
      
    }
    
}

for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}



}