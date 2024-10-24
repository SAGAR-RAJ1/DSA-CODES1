#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int vowel(string s,int start ){


if (start==-1)
{
    return 0;
}




if (s[start]=='a'||s[start]=='e'||s[start]=='i'||s[start]=='o'||s[start]=='u')
{
   return 1+vowel(s,start-1);

}

 return vowel(s,start-1);


}

int main(){
    
string s="ar";

cout<<vowel(s,s.size()-1);


    return 0;
}