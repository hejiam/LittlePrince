//
// Created by hejiamei on 2018/11/8.
//

/*constructor is a special method which is invoked automatically at the time of object creation.
 * It is used to initialize the data members of new object generally.
 * The constructor in C++ has the same name as class or structure.*/

/*default constructor*/
#include <iostream>
using namespace std;

class Employee{
public:
    Employee(){
        cout << " default constructor invoke " <<endl;
    }
};

int main(){
    Employee e1;
    Employee e2;
   // return 0;
}


/*parameterized constructor */

#include <iostream>
using namespace std;

class Employee{
public:
    int id;
    string name;
    float salary;
    Employee(int i,string n,float s){
        id = i;
        name = n;
        salary = s;
    }
    void display(){
        cout << id << " " << name << " " << salary <<endl;
    }
};

int main(){
    Employee e1 = Employee(001,"hehe",50000);
    e1.display();
}