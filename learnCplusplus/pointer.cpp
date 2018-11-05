//
// Created by hejiamei on 2018/11/5.
//

#include <iostream>
using namespace std;

int main(){
    int number = 20;
    int *p;
    p = &number;
    cout << "Address of number variable is:" << &number << endl;
    cout << "Address of p variable is:" << p << endl;
    cout << "Value of p variable is: "<< *p <<endl;
    return 0;
}

/*Swap 2 numbers without using 3rd variable*/
#include <iostream>
using namespace std;

int main(){
    int a=10,b=20,*p1=&a,*p2=&b;
    cout << "Before swap: *p1 = " << *p1 <<" *p2 = " << *p2 << endl;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    cout << "After swap: *p1 = " << *p1 <<" *p2 = " << *p2 << endl;
}
