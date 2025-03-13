#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(){
    int arr[10]={1,8,65,0,3,56,22,155,61,121};
int n=10;                                                                                                                   
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j < i; j++)
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