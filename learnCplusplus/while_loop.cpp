//
// Created by hejiamei on 2018/11/1.
//

/*while loop is used to iterate a part of the program several times.
 * If the number of iteration is not fixed, it is recommended to use while loop than for loop.*/
#include <iostream>
using namespace std;

int main(){
    int i=1;
    while (i<10){
        cout << i <<endl;
        i++;
    }
}

/*nested while loop*/
#include <iostream>
using namespace std;

int main(){
    int i=1;
    while(i<3){
        int j=1;
        while(j<3){
            cout << i << " " << j <<endl;
            j++;
        }
        i++;
    }
}


