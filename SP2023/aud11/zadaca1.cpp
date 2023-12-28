//
// Created by Stefan Andonov on 28.12.23.
//


#include<iostream>

using namespace std;


void transform(int array[], int n) {
    int tmp[100];
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) { //parnite broevi
            tmp[j] = array[i];
            ++j;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (array[i] % 2 == 1) { //neparnite broevi
            tmp[j] = array[i];
            ++j;
        }
    }

    for (int i=0;i<n;i++){
        array[i]=tmp[i];
    }
}

int main() {

    int n;
    int array[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    transform(array, n);

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }


    return 0;
}