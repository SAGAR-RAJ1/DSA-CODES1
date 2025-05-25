
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    
 print(--n);
    cout<<n<<" ";


}




int main(){
    
    print(4);
    return 0;
}