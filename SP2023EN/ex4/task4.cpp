//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {
    double points;
    char sign = ' ';
    cin >> points;

    int grade = int(points) / 10 + 1;
    int lastDigit = int(points) % 10;

    if (lastDigit >= 0 && lastDigit <= 3) {
        sign = '-';
    } else if (lastDigit >= 7) {
        sign = '+';
    } else {
        sign = ' ';
    }

    if (grade < 5) {
        grade = 5;
    }
    if (grade > 10) {
        grade = 10;
    }

    if (grade == 5) {
        sign = ' ';
    }
    if (grade == 10 && points>=97){
        sign = ' ';
    }

    cout << grade << sign;



//    if (points < 50) {
//        cout << 5 << endl;
//    } else if (points < 60) {
//        cout << 6 << endl;
//    } else if (points < 70) {
//        cout << 7 << endl;
//    } else if (points < 80) {
//        cout << 8 << endl;
//    } else if (points < 90) {
//        cout << 9 << endl;
//    } else {
//        cout << 10 << endl;
//    }
    return 0;
}
