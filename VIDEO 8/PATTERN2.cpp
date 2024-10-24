/*#include <iostream>
using namespace std;
int main()
{

    for (int row = 5; row >= 1; row--)
    {
        for (int space = row-1; space > 0; space--)
        {
            cout<<" ";
        }

        for (int column = 6-row ; column >0 ; column--)
        {
            cout<<"*";
        }

        cout << endl;
    }
}*/


#include <iostream>
using namespace std;
int main()
{

    for (int row = 1; row <=5; row++)
    {
        for (int space = 1; space <=5-row; space++)
        {
            cout<<" ";
        }

        for (int column = 1 ; column <=row; column++)
        {
            cout<<row;
        }

        cout << endl;
    }
}