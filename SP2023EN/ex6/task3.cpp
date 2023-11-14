//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

bool standard(int number) {
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
    cin >> n;
    int min;
    bool first = true;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        if (standard(number)) {
            if (first) {
                min = number;
                first = false;
            } else {
                if (number < min){
                    min = number;
                }
            }
            cout << number << endl;
        }
    }

    cout << min;
    return 0;
}
