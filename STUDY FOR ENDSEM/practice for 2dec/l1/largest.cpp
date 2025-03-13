#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(){
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 18, 9}};

int max=matrix[0][0];
for (int i = 0; i < 3; i++)
{
    for (int j  = 0; j < 3; j++)
    {
             if (max<matrix[i][j])
        {
            max=matrix[i][j];
        }
        
    }
    
}
cout<<max;


    return 0;
}