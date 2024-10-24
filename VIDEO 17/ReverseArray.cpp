// #include<iostream>
// using namespace std;
// int main(){

//  int arr[]={5,65,35,1,81,5,254,56};


// for (int i = 0; i <4; i++)
// {

//     /* code */
//     int a,b;

//     a=arr[i];
//     b=arr[7-i];

//     arr[i]=b;
//     arr[7-i]=a;



// }
// for (size_t i = 0; i < 8; i++)
// {
// cout<<arr[i]<<endl;
// }

// }


#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};

int start =0 , end=7;
   while (start<end)
    {

        swap(arr[start],arr[end]);
        start++;
        end--;


    }
/*why tis code ie for loop is not working ask it definetly*/
// for (start=0,end=7; start!=end; start++,end--)
// {
//     swap(arr[start],arr[end]);
// }

    for (int i = 0; i < 8; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
    }
    
    





}

