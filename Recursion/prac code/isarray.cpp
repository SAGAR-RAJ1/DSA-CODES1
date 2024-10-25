#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void add1(vector<int>&arr){
      for (int i = 0; i < 5  ; i++)
    {
        arr[i]=arr[i]+1;
    }
}
void add(int arr[]){
      for (int i = 0; i < 5  ; i++)
    {
        arr[i]=arr[i]+1;
    }
}


int main(){
    int arr[5]={1,2,3,4,5};
    add(arr);
    for (int i = 0; i < 5  ; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    vector<int>temp(5);
    temp={1,2,3,4,5};

    add1(temp);
    for (int i = 0; i < 5  ; i++)
    {
        cout<<temp[i]<<"  ";
    }
    
    return 0;
}