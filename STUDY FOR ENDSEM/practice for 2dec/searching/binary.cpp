#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool search(int arr[],int start,int end,int target){

if (start>end)
{
    return 0;
}
int mid=(start+end)/2;
if (arr[mid]==target)
{
    return 1;
}else if(arr[mid]>target)
{
    search(arr, start, mid-1, target);
}
else if (arr[mid]<target)
{
    search(arr,mid+1, end,target);
}

}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};

cout<<search(arr,0,7,85);
    return 0;
}