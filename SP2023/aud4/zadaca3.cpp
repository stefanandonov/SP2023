//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int main() {

    float points;
    cin >> points;

    int grade = int(points) / 10 + 1;

    if (grade < 5) {
        grade = 5;
    }

    if (grade>10){
        grade = 10;
    }

    cout << grade;

    return 0;
}