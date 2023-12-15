//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

long factorial (int number){
    if (number==1){
        return 1;
    } else {
        return number * factorial(number-1);
    }
}



int main() {
    int number;
    cin >> number;

    cout << factorial(number);


    return 0;
}
