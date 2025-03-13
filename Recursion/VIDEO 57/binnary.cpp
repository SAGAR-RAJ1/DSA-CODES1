#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool search(int arr[],int start,int end, int x){

  

   if (start>end)
   {
    return 0;
   }
    int  mid=(start+end)/2;

    if (arr[mid]==x)
    {
      return 1;
    }
    else if (arr[mid]>x)
    {
        return search(arr,start,mid-1,x);
    }
    else {
        return search(arr,mid+1,end,x);
    }
   
    
}


int main(){
    
    int arr[6]={1,3,5,66,92,225};
    cout<<search(arr,0,5,69);


    return 0;
}