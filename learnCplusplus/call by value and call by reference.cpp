//
// Created by hejiamei on 2018/11/3.
//

/*call by value: original value not modified.
 * value being passed to the function is locally stored
 * by the function parameter in stack memory location.
 * If you change the value of function parameter,
 * it is changed for the current function only.
 * It will not change the value of variable inside the caller method such as main().*/

#include <iostream>
using namespace std;

void change(int data);
int main(){
    int data = 3;
    //int data;
    change(data);
    cout << data << endl;
    return 0;
}
void change (int data){
    data = 5; //This value is not modified.
    cout << data << endl;
}


#include <iostream>
using namespace std;

void swap(int a,int b);
int main(){
    int a = 3,b = 5;
    swap(a,b);
    cout << "Value of a is:" << a << endl; //a=3
    cout << "Value of b is:" << b << endl; //b=5
    return 0;
}
void swap (int a, int b){
    int swap;
    swap = a;
    a = b;
    b = swap;
    cout << a <<endl; //a=5
    cout << b <<endl; //b=3
}

/*call by reference: original value is modified because we pass reference(address).
 * address of the value is passed in the function,
 * so actual and formal arguments share the same address space.
 * Hence, value changed inside the function,
 * is reflected inside as well as outside the function.*/
#include <iostream>
using namespace std;

void swap(int* x, int* y){
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}

int main(){
    int x=10,y=50;
    swap(&x, &y); //pass value to function
    cout << "Value of x is:" << x <<endl;
    cout << "Value of y is:" << y <<endl;
    return 0;
}

