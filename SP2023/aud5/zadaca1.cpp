//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>
using namespace std;

int main () {

    int count = 0;

    for (int i = 1000; i < 10000; i++) {
        int d4 = i%10;
        int d3 = i/10%10;
        int d2 = i/100%10;
        int d1 = i/1000;

        if (d1 == (d2+d3+d4)){
            cout << i << endl;
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}