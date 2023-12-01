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

    bool asc = true, desc = true;
    for (int i = 0; i < size-1; i++) {
        if (array[i] > array[i + 1]) {
            asc = false;
        }
        if (array[i] < array[i + 1]) {
            desc = false;
        }
        if (array[i]==array[i+1]){
            asc = desc = false;
        }
    }

    if (asc) {
        cout << "ASC" << endl;
    } else if (desc) {
        cout << "DESC" << endl;
    } else {
        cout << "NEITHER" << endl;
    }


    return 0;
}
