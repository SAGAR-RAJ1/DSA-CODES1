#include<iostream>
using namespace std;
int main(){

int arr[]={44,35,45,19,58,67};
int ans=__INT_MAX__;



for (int i = 0; i <6; i++)
{
    if (ans>arr[i])
    {
        ans=arr[i];
    }
    
}

cout<<ans;



}