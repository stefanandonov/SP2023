//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

bool descending(int number) {
    while (number >= 10) {
        int ld = number % 10;
        int sld = number / 10 % 10;

        if (ld >= sld) {
            return false;
        }
        number /= 10;
    }
    return true;
}

int main() {
    int n;
    bool first = true;
    int min = -1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int number;
        cin >> number;

        if (descending(number)) {
            if (first || number < min) {
                min = number;
                first = false;
            }
            cout << number << endl;
        }

    }
    cout << min;
    return 0;
}