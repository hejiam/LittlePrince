//
// Created by hejiamei on 2018/11/1.
//

/*If the number of iteration is not fixed and you must have to execute the loop at least once,
 * it is recommended to use do-while loop*/
#include <iostream>
using namespace std;

int main(){
    int i=1;
    do{
        cout << i <<endl;
        i++;
    }while(i<3);
}
