//
// Created by hejiamei on 2018/11/1.
//

/*The c++ switch statement executes one statement form multiple conditions.
 * It is like if-else-if ladder statement in c++*/
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number to check grade:";
    cin >> num;
    switch(num){
        case 10:cout << "It is 10";
            break;
        case 20:cout << "It is 20";
            break;
        case 30:cout << "It is 30";
            break;
        default:cout << "Not 10, 20 or 30";
            break;
    }
}