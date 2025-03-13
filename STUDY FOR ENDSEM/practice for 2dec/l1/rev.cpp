#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(){
    int arr[7]={101,25,65,34,85,20,55};

int start=0;
int end=6;
while (start<end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;
}
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<"  ";
        
    }

    return 0;
}