//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
using namespace std;

int main (){
    char c;
    cin >> c; //lower letter

    if (c=='a' || c=='e' || c=='u' || c=='i' || c=='o') {
        cout << "VOWEL";
    } else {
        cout << "CONSONANT" << endl;
    }

    switch (c) {
        case 'a':
        case 'e':
        case 'u':
        case 'i':
        case 'o':
            cout << "VOWEL"; break;
        default:
            cout << "CONSONANT" << endl;
    }
    return 0;
}
