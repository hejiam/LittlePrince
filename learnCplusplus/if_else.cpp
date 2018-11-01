//
// Created by hejiamei on 2018/11/1.
//
/*if statement:It executed if condition is true*/
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Please input a number" << endl;
    cin >> num;
    if (num % 2 == 0){
        cout << "It is even number! "<<endl;
    }
    return 0;
}

/*if-else statement: It executes if block if condition is true otherwise else block is executed*/
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    if (num % 2 == 0){
        cout << "It is even number!" << endl;
    }else{
        cout << "It is odd number!" << endl;
    }
    return 0;
}

/*nested if statement*/
#include <iostream>
using namespace std;

int main(){

}

/*if-else-if statement:executes one condition from multiple statements*/
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number to check grade:";
    cin >> num;
    if (num<0 || num>100){
        //code to be executed if condition is true
        cout << "Wrong number" << endl;
    }else if(num>0 && num<60 ){
        cout << "fail" << endl;
    }else if(num>=60 && num<70){
        cout << "D grade" <<endl;
    }else if(num>=70 && num<80){
        cout << "C grade" <<endl;
    }else if(num>=80 && num<90){
        cout << "B grade" <<endl;
    }else if(num>=90 && num<=100){
        cout << "A grade" <<endl;
    }
    return 0;
}
