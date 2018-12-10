//
// Created by hejiamei on 2018/11/2.
//

/*break:The C++ break is used to break loop or switch statement.
 * It breaks the current flow of the program at the given condition.
 * In case of inner loop, it breaks only inner loop.*/
#include <iostream>
using namespace std;

int main(){
    int i;
    for(i=1;i<10;i++){
        if(i==5){
            break;
        }
        cout << i << endl;
    }
    return 0;
}

/*break statement breaks inner loop only if you use break statement inside the inner loop.*/
#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            if(i==3 && j==3){
                break;
            }
            cout << i << " " << j << endl;
        }
    }

}
