//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>
using namespace std;

int main () {
    char c;
    cin >> c;

//    if (c=='i' || c=='I' || )

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "VOWEL" << endl; break;
        default:
            cout << "CONSONANT" << endl;

    }

    return 0;
}