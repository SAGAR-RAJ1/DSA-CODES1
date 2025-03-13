#include<iostream>
using namespace std;
int main(){

int arr[7]={2,34,44,26,7,90,20};

for (int i = 0; i < 6 ; i++)
{
    for (int j = 1 ; j < 6-; j++)
    {
        if (arr[j-1]<arr[j+1-1])
        {
            swap(arr[j],arr[j+1]);
        }
        
    }
    
}
for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<" ";
}

}