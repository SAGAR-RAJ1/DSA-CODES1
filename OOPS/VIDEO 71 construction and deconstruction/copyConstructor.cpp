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
   
    customer()
    {
        name = "sagar";
        account_number = 123;
        balance = 99999;
    }

    //inline constructor 
    inline customer(string s,int a,int b):name(s),account_number(a),balance(b){
        
    }

    //copy custructor
customer(customer &b){
    name=b.name;
    account_number=b.account_number;
    balance=b.balance;
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
    customer a3(a2);
    customer a4(a1);
    a1.display();
    a2.display();
    a3.display();
    a4.display();
    //without using copy custructor we can also use assignment operator
    customer a5;
    a5=a1;
    a1.display();
    return 0;
}

