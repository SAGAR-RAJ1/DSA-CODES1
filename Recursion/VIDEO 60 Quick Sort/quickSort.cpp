#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int partition(int arr[], int start, int end)
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}

void quick(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = partition(arr, start, end);
    // left side
    quick(arr, start, pivot - 1);
    // right side
    quick(arr, pivot + 1, end);
}

int main()
{
    int arr[15] = {2, 3, 4, 1, 6, 8, 5, 55, 12, 47, 36, 12, 58, 96, 15};
    quick(arr, 0, 14);
    for (int i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}