#include<iostream>
using namespace std;
int main(){

int arr[7]={2,34,44,26,7,90,20};

int n=sizeof(arr);
cout<<n<<endl;
for (int i = n-1; i >0; i--)
{
    for (int j = 0; j < i; j++)
    {
        if (arr[j]>arr[j+1])
        {
            
            swap
            (arr[j],arr[j+1]);
        }

        
    }
    
}



for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}





}
