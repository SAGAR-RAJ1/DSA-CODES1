#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(){
        int arr[10]={1,8,65,150,3,560,212,155,61,121};
                                                                                                               
   
   for (int i = 9; i >=0 ; i--)
   {
    for (int j = 0; j <i; j++)
    {
       if (arr[j]>arr[j+1])
       {
        swap(arr[j],arr[j+1]);
       }
       
    }
    
   }
   

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}