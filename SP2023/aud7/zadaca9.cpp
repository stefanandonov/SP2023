//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int main() {

    int array[100];

    int size;

    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    //1. gi vrtam site elementi od nizata
    for (int i = 0; i < size; i++) {
        int fixedElement = array[i];
        //2. so vgnezden ciklus, gi vrtam site elementi posle i-iot
        for (int j = i + 1; j < size; j++) {
            if (fixedElement==array[j]) {
                //tuka sme nasle duplikat na array[i]
                for (int k = j;k<size-1;k++){
                    array[k]=array[k+1];
                }
                --size;
                --j;
            }
        }
    }


    for (int i=0;i<size;i++){
        cout << array[i] << " " << endl;
    }
    return 0;
}