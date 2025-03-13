#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(){
        int arr[10]={1,8,65,0,3,56,22,155,61,121};
int n=10;
    for (int i = 1; i <n-1; i++)
    {
        for (int j = i; j >0; j--)
        {
          if (arr[j-1]>arr[j])
          {
             swap(arr[j],arr[j-1]);

          }
          else 
          break;
           
        }
       
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}