//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>
using namespace std;

int main () {

    int array [100];

    int size;

    cin >> size;
    for (int i=0;i<size;i++){
        cin >> array[i];
    }

    int sumEvenPosition = 0;
    int sumOddPosition = 0;

    for (int i=0;i<size;i++){
        if (i%2==0){
            sumEvenPosition += array[i];
        } else {
            sumOddPosition += array[i];
        }
    }

    cout << sumEvenPosition << " " << sumOddPosition << endl;



    return 0;
}