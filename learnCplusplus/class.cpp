//
// Created by hejiamei on 2018/11/8.
//

/*object is a group of similar objects.
 * It is a template from which objects are created.
 * It can have fields, methods, constructors etc. */

#include <iostream>
using namespace std;

class Student{
public:
    int id; //data member (also instance variable)
    string name; //data member (also instance variable)
};

int main(){
    Student s1; //create a object of Student
    s1.id = 0001;
    s1.name = "helen";
    cout << "id is:" << s1.id <<endl;
    cout << "name is:" << s1.name <<endl;
}


#include <iostream>
using namespace std;

class Student{
public:
    int id;
    string name;
    float salary;
    void insert(int i,string n,float s){
        id = i;
        name = n;
        salary = s;
    }
    void display(){
        cout << id << " " << name << " " <<salary << endl;
    }
};

int main(void){
    Student s1;
    Student s2;
    s1.insert(001,"helen",15000);
    s2.insert(002,"Gemma",20000);
    s1.display();
    s2.display();
}