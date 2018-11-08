//
// Created by hejiamei on 2018/11/8.
//

/*this is a keyword that refers to the current instance of the class.
 * It can be used to pass current object as a parameter to another method.
   It can be used to refer current class instance variable.
   It can be used to declare indexers.*/

#include <iostream>
using namespace std;

class Employee{
public:
    int id;
    string name;
    float salary;
    Employee(int i,string n,float s){
        this->id = i;
        this->name = n;
        this->salary = s;
    }
    void display(){
        cout << id << " " << name << " " << salary <<endl;
    }
};

int main(){
    Employee e1 = Employee(001,"hehe",50000);
    e1.display();
    return 0;
}