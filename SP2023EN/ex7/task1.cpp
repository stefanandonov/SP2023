//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {
    int array[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int max = array[0];

    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << " - " << max << " = " << array[i] - max << endl;
    }

//    cout << array[0];
    return 0;
}
