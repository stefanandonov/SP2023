//
// Created by Stefan Andonov on 15.12.23.
//

#include<iostream>
using namespace std;

void printDigits (int number){
    if (number==0){
        return ;
    } else {

        cout << number%10 << endl;
        printDigits(number/10);
    }
}


int sumOfDigits (int number){
    if (number==0){
        return 0;
    } else {
        return number%10 + sumOfDigits(number/10);
    }

}

int main (){
    int n;
    cin >> n;

    printDigits(n);


    return 0;
}