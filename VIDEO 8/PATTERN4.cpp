#include <iostream>
using namespace std;
int main()
{
int a=1;
    for (char row = 'A'; row <='E'; row++)
    {
        for (int space = 1; space <=5-a; space++)
        {
            cout<<" ";
           
        }

        for (char column = 'A' ; column <=row; column++)
        {
            cout<<column;
        }

        cout << endl; a++;
    }
}
