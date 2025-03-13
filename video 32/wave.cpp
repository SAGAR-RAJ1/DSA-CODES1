#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> matrix(4, vector<int>(4, 1));
    cout << "enter the matrix : " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    // print the 2d vector
    cout << "here is your  matrix : " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "here is your  matrix in wave form: " << endl;
    for (int j = 0; j < 4; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < 4; i++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        else
        {

            for (int i = 3; i >=0; i--)
            {
                cout << matrix[i][j] << " ";
                

            }
            cout << endl;
        }

       
    }
     return 0;
    }