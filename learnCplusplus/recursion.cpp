//
// Created by hejiamei on 2018/11/3.
//

/*recursion:When function is called within the same function, it is known as recursion in C++.
 * The function which calls the same function, is known as recursive function.*/

/*A function that calls itself, and doesn't perform any task after function call,
 * is known as tail recursion.
 * In tail recursion, we generally call the same function with return statement.*/

#include <iostream>
using namespace std;

int factorial(int n){
    if(n<0){
        return -1;
    }
    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    int fact,value;
    cout << "Enter a value:" << endl;
    cin >> value;
    fact = factorial(value);
    cout << "The factorial number is:"  << fact <<endl;
    return 0;
}

#include <iostream>
using namespace std;

int Fibonacci(int k){
    if (k == 1){
        return 0;
    }else if(k == 2){
        return 1;
    }else if(k > 2){
        return Fibonacci(k-1)+Fibonacci(k-2);
    }
}

int main(){
    int k;
    cin >> k;
    Fibonacci(k);
    for(int i=0; i<k; i++){
        cout << Fibonacci(i) << " ";
    }
}