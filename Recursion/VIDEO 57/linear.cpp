#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool search(int arr[],int index,int x){

    if (arr[index]==x)
    {
      return 1;
    }
    if (index==-1)
    {
        return 0;
    }
    
    return search(arr,index-1,x);
    
}


int main(){
    
    int arr[5]={1,3,5,2,9};
    cout<<search(arr,4,9);


    return 0;
}