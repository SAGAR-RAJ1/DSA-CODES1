#include<iostream>
#include<cmath>
#include<algorithm>
#include <climits>
using namespace std;
int main(){


int arr[4]={4,-6,2,8};
int n=sizeof(arr)/4;
cout<<n;
int ans=INT_MIN;

for (int i = 0; i < n; i++)
{int prefix=0;
prefix+=arr[i];
ans=max(ans,prefix);
if (prefix<0)
{
    prefix=0;
}


  
}
cout<<ans;

    

}