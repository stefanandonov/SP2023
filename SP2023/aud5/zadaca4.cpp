//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>
using namespace std;

int main () {
    int max;
    int number;

    bool first = true;

    while (cin >> number){

        if (number>100){
            continue;
        }

        if (first){
            max = number;
            first=false;
        }
        if (number > max){
            max = number;
        }
    }

    cout << max;


    return 0;
}