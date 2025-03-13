#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int left = start;
    int right = mid + 1;
    int index = 0;
    // sorting and filling
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index] = arr[+right];
            index++;
            right++;
        }
    }

    // left overs that is the left and right arrays are not empty yet

    // if left one left

    while (left <= mid)
    {
        temp[index] = arr[left];
        index++;
        left++;
    }

    // if right one left

    while (right <= end)
    {
        temp[index] = arr[+right];
        index++;
        right++;
    }
    index = 0;
    while (start <= end)
    {
        arr[start] = temp[index];
        start++;
        index++;
    }
}

void mergesort(int arr[], int start, int end)
{

    if (start == end)
    {
        return;
    }
    int mid = start - (start - end) / 2;

    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{

    int array[7] = {1, 5, 53, 64, 25, 16, 7};

    mergesort(array, 0, 6);

    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
