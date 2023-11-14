//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include <cmath>

using namespace std;


int numOfDigits(int number) {
    int counter = 0;
    while (number > 0) {
        ++counter;
        number /= 10;
    }
    return counter;
}

int transform(int number) {
    int d = numOfDigits(number);

    int firstDigit = int(number / pow(10, d - 1));
    int rest = number % int(pow(10, d - 1));

    return rest * 10 + firstDigit;
}


int main() {

    int x, n;
    cin >> x >> n;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (transform(number) % x == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }


    return 0;
}
