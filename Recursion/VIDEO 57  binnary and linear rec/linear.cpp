#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool linear(int arr[],int end,int x){

    if (end==-1)
    {
        return 0;
    }
    

if (arr[end]==x)
{
    return 1;   
}

return linear(arr,end-1,x);


}


int main(){
    int arr[5]={1,2,32,43,5};

    cout<<linear(arr,4,1);
    return 0;
}