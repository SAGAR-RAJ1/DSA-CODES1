#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class customer
{

    string name;
    int account_number;
    int balance;

public:
    // default constructor
    // this is created by the compiler it self but if you create a constructor
    // the default one will not be created
    customer()
    {
        cout << "hello i am default constructor" << endl;
    }

    // custructor overloading-> when they have same name (more than one constructoor is created) and
    // take different input/input numbers
    customer()
    {
        name = "sagar";
        account_number = 123;
        balance = 99999;
    }

    // parameterized constructor
    customer(string name, int account_number, int balance)
    {

        // if we have same name every where that is the upper object variable and this constructor variable name matches then to solve this error we use this-> pointer  that directly poiunt towear the main object that was created
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    //inline constructor 
    inline customer(string s,int a,int b):name(s),account_number(a),balance(b){
        
    }
    void display()
    {
        cout << name << " " << account_number << "  " << balance << endl;
    }
};

int main()
{
    customer a1;
    customer a2("rahul", 12, 34);
    a1.display();
    a2.display();
    return 0;
}