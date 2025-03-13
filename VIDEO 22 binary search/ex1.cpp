
#include<iostream>
using namespace std;
int main() {
    int key=48;

int arr[6]={1,2,3,4,5,6};
int start=arr[0];
int end=arr[5];
while (start<=end)
{
    int mid=(start + end)/2;

    if (arr[mid]==key)
    {
        cout<<"yeah got it at index "<<mid;
        return 0;
        
            }
        else if (arr[mid]>key)
        {
            /* code */end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    
}
  cout<<"not  exist ";




}