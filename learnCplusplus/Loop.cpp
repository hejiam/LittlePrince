//
// Created by hejiamei on 2018/11/1.
//

/*Loop: used to iterate a part of the program several times. If the number of iteration is fixed,
 * it is recommended to use for loop than while or do-while loops. */
#include <iostream>
using namespace std;

int main(){
    for(int i= 0; i<10;i++ ){
        cout << i << "\n";
    }
    return 0;
}

/*nested loop*/
#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << i <<" " << j << "\n";
        }
    }
}