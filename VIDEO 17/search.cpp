#include<iostream>
using namespace std;
int main(){


int n=85;



    int arr[]={5,65,35,1,81,5,254,56};

    for (int i = 0; i < 8; i++)
    {
        /* code */
        if (arr[i]==n)
        {
            /* code */

            cout<<"yes the number is present at index :"<<i;
            return 0;
        }
       

    }
     cout<<"number is not present";
}