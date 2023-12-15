//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;


bool isPrime(int number, int divisor) {
    if (divisor == 1) {
        return true;
    } else {
        if (number % divisor == 0) {
            return false;
        } else {
            return isPrime(number, divisor-1);
        }
    }
}

int nextPrime (int number){
    if (isPrime(number, number-1)){
        return number;
    } else {
        return nextPrime(number+1);
    }
}





int main() {

    int number;

    cin >> number;

    int result = nextPrime(number+1);

    cout << result << " - " << number << " = " << (result-number);


    return 0;
}
