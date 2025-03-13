#include<iostream>
using namespace std;
int main() {

int start = 0, end = 5, first = -1, last = -1, mid;
int target=8;

int nums[6]={5,7,7,8,8,10};


 while (start <= end) {
            mid = (start + end) / 2;
            if (nums[mid] == target) {
                last = mid;
                start = mid + 1;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
cout<<last;
}