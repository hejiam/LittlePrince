//
// Created by hejiamei on 2018/11/8.
//

/*Fibonacci Series
#include <iostream>
using namespace std;*/

int main(){
    int k;
    cin >> k;
    int a[k];
    a[0]=0;
    a[1]=1;
    if(k==0){
        cout << a[0] << endl;
    }else{
        cout << a[0] << " " << a[1] << " ";
    }
    for (int i=2; i<k; i++){
        a[i] = a[i-1] + a[i-2];
        if(i!= k-1){
            cout << a[i] << " ";
        }else{
            cout << a[k-1] << endl;
        }

    }

}


/*recursion*/
#include <iostream>
using namespace std;

int Fibonacci(int k){
    if (k==1){
        return 0;
    }else if(k==2){
        return 1;
    }else if(k>2){
        return Fibonacci(k-1)+Fibonacci(k-2);
    }
}

int main(){
    int k;
    cin >> k;
    //Fibonacci(k);
    for(int i=1; i<=k; i++){
        cout << Fibonacci(i) << " ";
    }
}