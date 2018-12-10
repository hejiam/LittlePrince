//
// Created by hejiamei on 2018/11/13.
//

#include <iostream>
using namespace std;

int main(){
    int m,n,i,flag=0;
    cout << "Enter a number:" <<endl;
    cin >> m;
    //只需要取到一半即可，因为m/2～m的数值是2～m/2的数值的2倍，m/2～m必然含有2因子
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