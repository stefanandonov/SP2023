//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int main() {
    int dogAge;
    cin >> dogAge;

    if (dogAge < 0) {
        cout << "Not valid dog age" << endl;
        return 0;
    }

    if (dogAge <= 2) {
        cout << dogAge * 10.5 << endl;
    } else {
        cout << 10.5 * 2 + (dogAge - 2) * 4;
    }


    return 0;
}