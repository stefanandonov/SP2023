//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {
    int number;
    int max;

    cin >> max;

    while (cin >> number) {
        if (number > max) {
            max = number;
        }
    }

    cout << max;
    return 0;
}
