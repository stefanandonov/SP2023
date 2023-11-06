//
// Created by Stefan Andonov on 20.10.23.
//

#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a << " + " << b << " = " << (a + b) << endl;
    cout << a << " - " << b << " = " << (a - b) << endl;
    cout << a << " * " << b << " = " << (a * b) << endl;
    cout << a << " / " << b << " = " << (float(a) / b) << endl;
    cout << a << " % " << b << " = " << (a % b) << endl;
    return 0;
}
