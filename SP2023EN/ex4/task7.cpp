//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {
    int a, b;
    char op;
    cin >> a >> op >> b;
    cout << a << op << b << "=";

    switch (op) {
        case '+':
            cout << a + b; break;
        case '-':
            cout << a - b; break;
        case '*':
            cout << a * b; break;
        case '/':
            cout << float(a) / b; break;
        case '%':
            cout << a % b; break;
    }
    return 0;
}
