//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {

    int counter = 0;

    for (int i = 1000; i < 10000; i++) {

        int firstDigit = i / 1000;
        int secondDigit = i / 100 % 10;
        int thirdDigit = i / 10 % 10;
        int fourthDigit = i % 10;

        if (firstDigit == (secondDigit + thirdDigit + fourthDigit)){
            cout << i << endl;
            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}
