//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int sumOfDigits(int number){
    int sum = 0;
    while (number>0){
        sum+=number%10;
        number/=10;
    }
    return sum;
}

int main() {
    int x;
    cin >> x;

    int sum = sumOfDigits(x);

    cout << "The sum of digits of the number: " << x << " is: " << sum << endl;


    return 0;
}