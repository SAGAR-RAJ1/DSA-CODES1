#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(){
    int arr[7]={101,25,65,34,85,20,55};
int min=arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    cout<<min;
    return 0;
}