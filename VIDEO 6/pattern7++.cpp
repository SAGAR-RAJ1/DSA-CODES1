#include <iostream>
using namespace std;
int main()

{
    int a = 1;
    int b = 5;
    for (int row = 1; row < 6; row++)
    {
        for (int column = a; column <= b; column++)
        {
            /* code */
            cout << column << " ";
        }
        a = b + 1;
        b = b + 5;
        cout << endl;
    }
}