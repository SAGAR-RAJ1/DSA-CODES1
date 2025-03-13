#include <iostream>
using namespace std;
int main()
{

    for (int row = 1 ; row < 8 ; row++)
    {
        for (int column = 0 ; column <row ; column++)
        {
            /* code */
            cout <<"*";
        }
        cout << endl;
    }
}