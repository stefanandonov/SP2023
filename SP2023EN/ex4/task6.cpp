//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {

    int dogAge;

    cin >> dogAge;

    if (dogAge < 0) {
        cout << "Age must be a positive number";
        return 0;
    }

    if (dogAge <= 2) {
        cout << dogAge * 10.5;
    } else if (dogAge > 2) {
        cout << 2 * 10.5 + (dogAge - 2) * 4;
    }
    return 0;
}
