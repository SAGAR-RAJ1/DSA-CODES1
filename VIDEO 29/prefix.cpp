#include<iostream>
#include<vector>
using namespace std;


int main(){



    int arr[]={1,2,3,4,5};


class std :: vector<int>prefix(5);
prefix[0]=arr[0];

for (int i = 1; i < 5; i++)
{
   prefix[i]=prefix[i-1]+arr[i];
}

for (int i = 0; i < 5; i++)
    {
        cout << prefix[i] << " ";
    }
    cout << endl;
}