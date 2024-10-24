#include <iostream>
using namespace std;
int main()
{

    int arr[50];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 0; i < 48; i++)
    {
        arr[i + 2] = arr[i] + arr[i + 1];
    }

    cout << arr[2];
}