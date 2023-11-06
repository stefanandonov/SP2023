//
// Created by Stefan Andonov on 12.10.23.
//

#include<iostream>

using namespace std;

int main() {

    int age;
    cin >> age;
    int vodkasSold = 0;

    if (age < 0) {
        cout << "Not valid input. You are joking with me";
//        break;
        return 0;
    }

    if (age >= 18) {
        vodkasSold++;
        cout << "Ok, go ahead and get drunk!" << endl;
    }
    else { cout << "No no no, go drink juice!" << endl; }


    return 0;
}
