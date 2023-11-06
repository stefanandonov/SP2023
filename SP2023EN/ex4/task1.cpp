//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << 1 << endl;
    } else if (x < 0 && y > 0) {
        cout << 2 << endl;
    } else if (x < 0 && y < 0) {
        cout << 3 << endl;
    } else if (x > 0 && y < 0) {
        cout << 4 << endl;
    } else if (x == 0 && y == 0) {
        cout << "Coordinating center" << endl;
    } else if (x == 0) {
        cout << "y axis" << endl;
    } else if (y == 0) {
        cout << "x axis" << endl;
    }
    return 0;
}
