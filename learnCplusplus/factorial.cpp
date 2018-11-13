//
// Created by hejiamei on 2018/11/13.
//

/*recursion*/
#include <iostream>
using namespace std;

int factorial(int n){
    if(n < 0){
        cout << "Wrong number!" <<endl;
        return -1;
    }
    if(n==0){
        return 1;
    }else{
        return factorial(n-1)*n;
    }
}

int main(){
    int m,fact;
    cout << "Enter a number: ";
    cin >> m;
    fact = factorial(m);
    cout << "Factorial of " << m << " is: " << fact << endl;
    return 0;

}

/*loop*/
#include <iostream>
using namespace std;

int main(){
    int m,fact,i;
    fact = 1;
    cout << "Enter a number: ";
    cin >> m;
    for(i=1; i<=m; i++){
        fact = i*fact;
    }
    cout << "Factorial of " << m << " is " << fact <<endl;
}