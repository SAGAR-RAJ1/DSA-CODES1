#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool binary(int arr[],int start,int end,int x){

    if (start>=end)
    {
        return false;
    }
    int mid=(start+end)/2;

if (arr[mid]==x)
{
    return true;   
}
else if (arr[mid]>x)
{
    return binary(arr,start,mid-1,x);
}
else{
    return binary(arr,mid+1,end,x);
};

}

int main(){
        int arr[5]={1,2,32,43,85};

    cout<<binary(arr,0,4,43);
    return 0;
}

// #include <iostream>

// bool binary(int arr[], int start, int end, int x) {
//     if (start > end) {
//         return false; // Element not found
//     }

//     int mid = start + (end - start) / 2;

//     if (arr[mid] == x) {
//         return true; // Element found
//     } else if (arr[mid] > x) {
//         return binary(arr, start, mid - 1, x);
//     } else {
//         return binary(arr, mid + 1, end, x);
//     }
// }

// int main() {
//     int arr[5] = {1, 2, 32, 43, 85};
//     int target = 2;

//     if (binary(arr, 0, 4, target)) {
//         std::cout << "Element " << target << " found!\n";
//     } else {
//         std::cout << "Element " << target << " not found.\n";
//     }

//     return 0;
// }
