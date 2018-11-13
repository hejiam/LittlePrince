//
// Created by hejiamei on 2018/11/13.
//

#include <iostream>
using namespace std;

int main(){
    string m;
    cin >> m;
    int i,j,flag = 0; //设立标志位判断
    j = m.length()-1;
    string a;
    //将字符串反序，i的值要取到0
    for (i=j ; i >= 0; i--){
        a[j-i] = m[i];

    }
    //判断该字符串是否是回文串，比较反序后的字符串与原字符串是否相等
    for (i=0; i < m.length(); i++){
        if (a[i] != m[i] ){ //还可以用异或是否为0判断
            cout << "String is not palindrome" << endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "String is palindrome" << endl;
    }

}