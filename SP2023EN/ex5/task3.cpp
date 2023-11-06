//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {
    int number;
    int max;
    bool first = true;
    while (cin >> number) {
        if (first){
            max = number;
            first = false;
        }

        if (number > max) {
            max = number;
        }
    }

    cout << max;
    return 0;
}
