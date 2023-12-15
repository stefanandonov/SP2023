//
// Created by Stefan Andonov on 15.12.23.
//

#include<iostream>

using namespace std;

int nzd(int m, int n) {
    if (m % n == 0) {
        return n;
    } else {
        return nzd(n, m%n);
    }
}

int main() {
    int a,b;
    cin >> a >> b;

    cout << nzd(a,b);
    return 0;
}