//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {
    int a, b, c, tmp;
    cin >> a >> b >> c;

    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        cout << "Triangle can be formed" << endl;
        if (a > b) {
            tmp = a;
            a = b;
            b = tmp;
        }
        if (a > c) {
            tmp = a;
            a = c;
            c = tmp;
        }
        if (b > c) {
            tmp = b;
            b = c;
            c = tmp;
        }

        if ((a * a + b * b) == c * c) {
            //right triangle
            cout << "Right triangle" << endl;
            cout << "Area: " << (a * b) / 2.0 << endl;
        }
    } else {
        cout << "Invalid segment lengths";
    }
    return 0;
}
