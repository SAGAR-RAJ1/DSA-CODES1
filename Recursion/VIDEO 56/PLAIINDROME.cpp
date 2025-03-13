#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool pallindrome(string s, int i , int j){
   
   if (s[i]!=s[j])
   {
    return 0;
   }
   
   if (s[i]>=s[j])
   {
    
    return 1;
   }
   
  return  pallindrome(s,i+1,j-1);

}


int main(){
    

string s="ragar";
cout<<s.size()<<endl;

cout<<pallindrome(s,0,s.size()-1);






    return 0;
}