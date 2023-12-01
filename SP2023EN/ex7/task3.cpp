//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include <cmath>

using namespace std;


int main() {
    int size;
    int array[100];

    cin >> size;
    int sumEvenP = 0;
    int sumOddP = 0;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
        if (i % 2 == 0) {
            sumEvenP += array[i];
        } else { // odd
            sumOddP += array[i];
        }
    }

    cout << sumEvenP << endl << sumOddP << endl << (float)sumEvenP/sumOddP << endl;

//    for (int i = 0; i < size; i++) {
//        cout << array[i];
//        cout << ((i == size - 1) ? "\n" : ", ");
//        if (i!=size-1){
//            cout << ", ";
//        } else { //i==size-1
//            cout << endl;
//        }
//    }
    return 0;
}
