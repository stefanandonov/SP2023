//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>
#include<cmath>

using namespace std;

int length(int number) {
    int counter = 0;
    while (number > 0) {
        counter++;
        number /= 10;
    }
    return counter;
}


int firstDigit(int number) {
    return number / int(pow(10, length(number) - 1));
}

int remainder(int number) {
    return number % int(pow(10, length(number) - 1));
}

int main() {
    int n, x;
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        int number;
        cin >> number;

        int fd = firstDigit(number);
        int r = remainder(number);

        int newNumber = 10 * r + fd;

        if (newNumber % x == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }


    return 0;
}