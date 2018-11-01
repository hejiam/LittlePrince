/*input output
 * <iostream> define the cin,cout,err objects
 * <iomanip> declare services useful for performing formatted I/O, such as setprecision and setw
 * <fstream> declare services for user-controlled file processing*/

#include <iostream>

using namespace std;

int  main(){
    int age;
    int x=4;
    float y,z;
    y = 30.8;
    z = x * y + x;
    cout << x <<" "<< y <<endl;
    cout << z << endl;
    char name[100]; // use char array or string can come true
    //string name;
    cout <<"input your age"<<endl;
    cin >> age;
    cout <<"input your name"<<endl;
    cin >>name;
    cout << name << " age is " <<age<<endl;

}