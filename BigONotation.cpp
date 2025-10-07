//Exp 22 : Big O Notation In cpp
#include <iostream>
using namespace std;
void printAllPairs(int arr[], int n) {
    for (int i = 0; i < n; i++) {                 
        for (int j = 0; j < n; j++) {            
            cout << arr[i] << ", " << arr[j] << endl;  
        }
    }
}
int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);  
    printAllPairs(arr, n);                 
}
/*
Output :
1, 1
1, 2
1, 3
2, 1
2, 2
2, 3
3, 1
3, 2
3, 3
*/
