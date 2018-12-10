//
// Created by hejiamei on 2018/11/5.
//

/*single dimensional array  */
#include <iostream>
using namespace std;

int main(){
    int arr[5]={10,20,20,10,30}; //create array and initializing array
    //traversing array
    for(int i=0; i<5; i++){
        cout << arr[i] <<endl;
    }
}

 /*print array elements  */
#include <iostream>
using namespace std;

void printArray(int* a){
    cout << "Printing array elements:" << endl;
    for (int i=0; i<5 ;i++){
        cout << a[i] << endl;
    }
}
int main(){
    int arr1[5]={10,10,10,10,10};
    int arr2[5]={20,20,20,20,20};
    printArray(arr1);
    printArray(arr2);
    return 0;
}


 /*print minimum array */
#include <iostream>
using namespace std;

int printMin(int* a){
    int min=0;
    for(int i=0; i<4; i++){
        if(a[i]>a[i+1]){
            min=a[i+1];
        }else {
            min = a[i];
        }
    }
    return min;
}

int main(){
    int a[5]={1,5,6,2,7};
    cout << printMin(a);

}

#include <iostream>
 using namespace std;

 void printMin(int* a){
     int min=a[0];
     for (int i=0;i<5;i++){
         if(min > a[i]){
             min = a[i];
         }
     }
     cout << "Minimum elements is:" << min << endl;
 }
 int main(){
     int a[5]={10,3,4,5,2};
     printMin(a);
     return 0;
 }


 /*Multidimensional Array*/

#include <iostream>
using namespace std;

int main(){
    int a[3][3]={10,2,3,4,5,6,2,3,5};
    int b[3][3]={{3,5,3},{2,4,2},{7,6,1}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}