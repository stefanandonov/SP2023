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

    int tmp = array[size - 1];

    for (int i = size - 1; i >= 1; i--) {
        array[i] = array[i-1];
    }

    array[0]=tmp;

    for (int i = 0; i < size; i++) {
        cout << array[i];
        cout << ((i == size - 1) ? "\n" : ", ");
    }
    return 0;
}
