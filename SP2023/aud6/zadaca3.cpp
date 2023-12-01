//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

void counter(int number) {
    for (int i = 1; i <= number; i++) {
        cout << i;
    }
    cout << endl;
    for (int i = number; i > 0; i--) {
        cout << i;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
//        Solution without functions
//        for (int j = 1; j <= i; j++) {
//            cout << j;
//        }
//        cout << endl;
//        for (int j = i; j > 0; j--) {
//            cout << j;
//        }
//        cout << endl;

        counter(i);
    }


    return 0;
}