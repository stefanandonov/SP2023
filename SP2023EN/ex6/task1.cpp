//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include <cmath>
using namespace std;

void evenNumbers (int a, int b){
    int counter = 0;
    for (int i=a;i<=b;i++){
        if (i%2==0){
            cout << i << endl;
            ++counter;
        }
        if (counter==10){
            return ;
        }
    }
}

int numOfDigits (int number){
    int counter = 0;
    while (number>0){
        ++counter;
        number/=10;
    }
    return counter;
}

int main() {

    evenNumbers(100,150);

    int number;
    cin >> number;
    cout << int(number / pow(10, numOfDigits(number)-1));




    return 0;
}
