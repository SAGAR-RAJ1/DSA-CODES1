#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    

    cout<<n<<" ";

 print(--n);
}




int main(){
    
    print(5);
    return 0;
}