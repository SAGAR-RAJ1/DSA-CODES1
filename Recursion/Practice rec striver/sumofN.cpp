#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int sum(int n){
    if(n==1)
    return 1;

    return n + sum(n-1) ;

}

int main(){
    int ans = sum(4);
    cout<<ans;
    return 0;
}