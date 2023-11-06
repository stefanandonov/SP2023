//
// Created by Stefan Andonov on 20.10.23.
//

#include<iostream>

using namespace std;

int main() {
    char c;
    cin >> c;
    cout << char(c + 'a' - 'A'); //char(c+32);
    return 0;
}
