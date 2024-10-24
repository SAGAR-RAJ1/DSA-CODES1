// #include<iostream>
// using namespace std;
// int main(){

// // 0 1 1 2 3 5 8 12
// int arr[100];
// arr[0]=0;
// arr[1]=1;
// for (int  i = 0; i < 100; i++)
// {
//     arr[i+2]=arr[i]+arr[i+1];
    
// }
// cout<<"Fibonacci Series: "<<endl;






// }

#include<iostream>
using namespace std;
int main(){



int n;
cout<<"enter the number"<<endl;
cin>>n;
int arr[1000];
arr[0]=0;
arr[1]=1;

for (int i = 2; i <=n-1; i++)
{
    arr[i]=arr[i-1]+arr[i-2];

   
}

 cout<<arr[n-1];
}