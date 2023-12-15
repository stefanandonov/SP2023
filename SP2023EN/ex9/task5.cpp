//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;


int sumOfDigit(int number){
    if (number==0){
        return 0;
    } else {
        return number%10 + sumOfDigit(number/10);
    }
}




int main() {
    int number;
    cin >> number;
    cout << sumOfDigit(number);

    return 0;
}
