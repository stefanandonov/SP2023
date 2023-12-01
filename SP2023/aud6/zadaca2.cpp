//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int reverseNumber (int number) {
    int reverse = 0;
    while (number > 0) {
        int c = number % 10;
        reverse = reverse*10+c;
        number/=10;
    }
    return reverse;
}

int main() {

    int a, b;
    cin >> a >> b;
    int count = 0;

    for (int i = a; i <= b; i++) {
        if (i == reverseNumber(i)){
            cout << i << endl;
            ++count;

        }
    }

    cout << count;


    return 0;
}