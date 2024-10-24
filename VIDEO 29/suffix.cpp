#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[]={1,2,3,4,5};

    class std :: vector<int>suffix(5);
    suffix[4]=arr[4];

for (int  i = 3; i >=0; i--)
{
    suffix[i]=suffix[i+1] + arr[i];
}



//print the vector

    for (int i = 0; i < 5; i++)
    {
        cout << suffix[i] << " ";
    }
    cout << endl;
}