//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>


using namespace std;

int main() {

    float a, b, c, tmp;
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Triangle can be formed" << endl;
        if (a > b) {
            swap(a, b);
//            tmp = a;
//            a = b;
//            b = tmp;
        }
        if (a > c) {
            swap(a, c);
//            tmp = a;
//            a = c;
//            c = tmp;
        }
        if (b > c) {
            swap(b, c);
//            tmp = b;
//            b = c;
//            c = tmp;
        }

        if ((a * a + b * b) == c * c) {
            cout << "Right triangle" << endl;
            cout << "Area: " << (a*b)/2.0;
        } else {
            cout << "But it's not a right triangle" << endl;
        }
    } else {
        cout << "Triangle can't be formed" << endl;
    }
    return 0;
}