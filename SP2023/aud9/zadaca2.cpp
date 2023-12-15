//
// Created by Stefan Andonov on 15.12.23.
//

#include<iostream>

using namespace std;

void countDown(int n) {
    if (n == 0) {
        cout << 0;
        return;
    } else {
        cout << n << endl;
        countDown(n - 1);
    }
}

void countUp1(int i, int n) {
    if (i == n) {
        cout << i << endl;
        return;
    } else {
        cout << i << endl;
        countUp1(i + 1, n);
    }
}

void countUp2(int n) {
    if (n == 0) {
        cout << 0 << endl;
        return;
    } else {
        countUp2(n - 1);
        cout << n << endl;
    }
}

int main() {
    int n;
    cin >> n;


    countUp2(n);

    return 0;
}