#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class human {
   protected:
    string name;
    int age;
};

class student : protected human{
   
   int roll;
 public:
 void input(string name,int age,int roll){
    this->name=name;
    this->age=age;
    this->roll=roll;
 }
 void display(){
    cout<<name<<"  "<<age<<"  "<<roll<<endl;
 }

};

int main(){
    
    student s;
    s.input("sagar",20,2304091);
    s.display();
    return 0;
}