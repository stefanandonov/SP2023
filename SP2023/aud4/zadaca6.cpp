//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int main() {
    int a, b;
    char op;
    cin >> a >> op >> b;
    cout << a << " " << op << " " << b << " = ";

//    if (op=='+') {
//
//    } else if (op=='-') {
//
//    } else if (op=='*'){
//
//    } else if (op=='/') {
//
//    } else if (op=='%'){
//
//    }

    switch (op) {
        case '+':
            cout << a + b << endl; break;
        case '-':
            cout << a - b << endl; break;
        case '*':
            cout << a * b << endl; break;
        case '/':
            cout << float(a) / b << endl; break;
        case '%':
            cout << a % b << endl; break;
        default:
            cout << "Invalid operation" << endl; break;
    }


    return 0;
}