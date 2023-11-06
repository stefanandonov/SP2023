//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {
    int points;
    cin >> points;

    if (points < 50) {
        cout << 5 << endl;
    } else if (points >= 50 && points < 60) { //[50,60)
        cout << 6 << endl;
    } else if (points >= 60 && points < 70) { //[60,70)
        cout << 7 << endl;
    } else if (points >= 70 && points < 80) { //[70,80)
        cout << 8 << endl;
    } else if (points >= 80 && points < 90) { //[80,90)
        cout << 9 << endl;
    } else {
        cout << 10 << endl;
    }
    return 0;
}
