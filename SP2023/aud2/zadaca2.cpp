//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>
using namespace std;

int main () {
    float x = 3.0/2 + (5 - 46*5.0/12);
    //46*5/12 = 230/12 = 19
    //3/2 = 1

    //x = 3/2 + (5 - 46*5/12) = 1 + (5 - 19) = -13
    cout << x;
    return 0;
}
