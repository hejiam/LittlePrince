//
// Created by hejiamei on 2018/11/3.
//

/*advantage of functions:code reusability; code optimization.
 * type:library function;user-define function.*/

#include <iostream>
using namespace std;

void func(){
    static int i=0;
    //static variable is initialized only once and exists till the end of a program.
    // It retains its value between multiple functions call.
    int j=0; //local variable
    i++;
    j++;
    cout << "i=" << i << " and j=" << j << endl;
}
int main(){
    func();
    func();
    func();
}
