#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool palindrome(const string &s, int a){

    int n = s.length();
    if (s[a]!=s[n-a-1])
    {
      return false;
    }
    if(a>=n/2)
    return true;

    return palindrome(s,a+1);
    


}


int main(){
    bool a = palindrome("MMADAMM",0);
    cout<<a;
   
}