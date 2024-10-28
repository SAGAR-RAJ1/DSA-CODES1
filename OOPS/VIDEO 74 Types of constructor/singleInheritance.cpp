#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class human{
    protected:
    string name;
    int age;

    public:
    human(){
        cout<<"i am human"<<endl;//phle base class ka constructor run krega phir child
    }};
    class student : public human{
public:
     student(){
          cout<<"i am student"<<endl;

     }
    
};

int main() {
    student a;

    return 0;
}