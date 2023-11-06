//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int number;
    int sumOdd = 0, sumEven = 0;
    for (int i = 1; i <= n; i++) {
        cin >> number;
        if (i % 2 == 1) { //we are on an odd position
            sumOdd += number;
        } else { //even position
            sumEven += number;
        }
    }

    cout << sumEven << " " << sumOdd << endl;
    return 0;
}
