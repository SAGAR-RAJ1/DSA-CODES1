#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class balance
{
private:
    int a;

protected:
    int b;

public:
    int c;
};

int main()
{
    balance sagar;
    // sagar.a=5; ---> will thgrow error that its private cant use out side the class
    // sagar.b=5; ---> will thgrow error that its private cant use in external code
    sagar.c = 5; // ---> will not throw error as its public can be used anywhere
    return 0;
}