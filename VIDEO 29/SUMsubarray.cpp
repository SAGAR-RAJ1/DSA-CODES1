// #include<iostream>
// using namespace std;
// int main(){


// int arr[8]={3,4,-2,5,8,20,-10,8};
// int n=8;
// for (int i = 0; i < n-1; i++)
// {
//     int sum1=0, sum2=0;
//     for (int j = 0; j < i; j++){
//         sum1 += arr[j];
//     }
//     for (int  j = i; j < n; j++)
//     {
//         sum2+=arr[j];
//     }
//     if (sum1==sum2)
//     {
//         cout<<"we got the sum at at index"<<i<<endl;
//         return 0;
//     }
    
// }
// cout<<"no sum found"<<endl;

// }


//method 2

#include<iostream>
using namespace std;
int main(){
int prefix=0;

int arr[8]={3,4,-2,5,8,20,-10,8};
int n=8;
//sum of all the elements
int tsumm=0;
for (int i = 0; i < n; i++){
    tsumm+=arr[i];
}

for (int i = 0; i <n-1 ; i++)
{
    
  prefix += arr[i];
  if (prefix==(tsumm-prefix))
  {
    cout<<"we got the answer";
    return 0;
  }
  

  }

cout<<"no sum found"<<endl;

}