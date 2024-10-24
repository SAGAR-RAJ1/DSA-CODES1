#include<iostream>
using namespace std;
int main(){

int arr[6]={2,3,4,6,7,1};


for (int i = 0; i < 6; i++)
{
    for (int j = i; j < 6; j++)
    {
        if (arr[j]<arr[i])  
        {
            swap(arr[i],arr[j]);
  
        }
        
    }
    
}
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}



}