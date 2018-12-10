//
// Created by hejiamei on 2018/11/5.
//
#include <iostream>
using namespace std;

int main(){
    int m,n,i,flag=0;
    cout << "Enter a number:" <<endl;
    cin >> m;
    n=m/2;
    for (i=2;i<n;i++){
        if(m % i == 0){
            cout << "Number is not prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        cout << "Number is prime" << endl;
    }
}