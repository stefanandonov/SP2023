//
// Created by Stefan Andonov on 16.10.23.
//

#include<iostream>

using namespace std;

int main() {
    char letter;

    cin >> letter;
    cout << (char) (letter + 32) << endl;
    cout << (char) (letter - 'A' + 'a') << endl;
    return 0;
}
