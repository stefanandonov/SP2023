//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include <cmath>

using namespace std;

bool hasDuplicates (int array [], int size, int idx){
    for (int i=0;i<size;i++){
        if (i!=idx && array[i]==array[idx]){
            return true;
        }
    }
    return false;
}

int main() {

    int size;
    int array[100];

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }


    for (int i=0;i<size;i++){
        cout << i << " " << hasDuplicates(array, size, i) << endl;
    }


    return 0;
}
