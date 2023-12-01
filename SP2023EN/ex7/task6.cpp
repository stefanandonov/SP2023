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

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int k;
    cin >> k;

    int temp[100];

    //Put the last K elements in the temp array
    for (int i = size - k; i < size; i++) {
        temp[i - size + k] = array[i];
    }


    for (int i = size - 1; i >= k; i--) {
        array[i]=array[i-k];
    }

    //Put the temp back in the start of the array
    for (int i=0;i<k;i++) {
        array[i] = temp[i];
    }

    for (int i = 0; i < size; i++) {
        cout << array[i];
        cout << ((i == size - 1) ? "\n" : ", ");
    }
    return 0;
}
