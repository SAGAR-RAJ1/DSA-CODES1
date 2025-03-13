#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(){
    int arr[10]={1,8,65,0,3,56,22,155,61,121};
int n=10;
    for (int i = 0; i <n-1; i++)
    {int index =i;
        for (int j = i+1; j < 10; j++)
        {
          if (arr[index]>arr[j])
          {
            index=j;

          }
          
           
        }
        swap(arr[i],arr[index]);
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}