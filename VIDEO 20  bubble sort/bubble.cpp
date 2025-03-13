#include<iostream>
using namespace std;
int main(){

int arr[7]={5,55,9,26,8,2,485};

for (int i = 0; i <6; i++)
{
    for (int j = 0; j <6; j++)
    {
         if (arr[j]<arr[j+1])
         {
            swap
            (arr[j],arr[j+1]);
         }
         
    }
    
}
for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<" ";
}




}