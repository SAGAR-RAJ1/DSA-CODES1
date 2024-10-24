#include<iostream>
using namespace std;
int main(){


int arr[4]={4,-6,2,8};
int n=sizeof(arr)/4;
cout<<n;
int ans=INT16_MIN;

for (int i = 0; i < n; i++)
{   int sum=0;
    for (int j = i; j < n; j++)
    {
     
        sum+=arr[j];
        ans=max(ans,sum);

    }
    
}
cout<<ans<<endl;
    

}