//
// Created by hejiamei on 2018/11/3.
//

/*continue statement is used to continue loop.
 * It continues the current flow of the program and skips the remaining code at specified condition.
 * In case of inner loop, it continues only inner loop.*/
#include <iostream>
using namespace std;

int main(){
    int i;
    for(i=1; i<10; i++){
        if(i==5){
            continue;
        }
        cout << i << endl;
    }
}

/*Continue statement continues inner loop only if you use continue statement in inner loop*/
#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            if(i==3 && j==3){
                continue;
            }
            cout << i << " " << j << endl;
        }
    }
}