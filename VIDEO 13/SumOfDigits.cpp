#include <iostream>

using namespace std;
int main()
{

    cout << "Enter The Number" << endl;
    int num, rem;
    int ans = 0;
    cin>>num;

    while(num>9)
    {

        while(num!=0)
        {

            rem=num%10;
            num=num/10;
            ans=rem+ans;
            /* code */
        }
        num=ans;
    }


    cout << num;
}