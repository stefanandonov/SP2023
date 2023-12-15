//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;


int gcd(int m, int n) {
    if (m % n == 0) {
        return n;
    } else {
        return gcd (n, m%n);
    }
}


int main() {

    int array [100];
    int size;
    cin >> size;

    for (int i=0;i<size;i++){
        cin >> array[i];
    }

    int arrayGCD = gcd(array[0], array[1]);

    for (int i=2;i<size;i++){
        arrayGCD = gcd(arrayGCD, array[i]);
    }

    cout << arrayGCD;

    return 0;
}
