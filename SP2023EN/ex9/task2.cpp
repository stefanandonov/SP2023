//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

void countDown (int number){
    if (number==-1){
        return ;
    } else {
        cout << number << endl;
        countDown(number-1);
    }
}

void countUp (int number){
    if (number==-1){
        return ;
    } else {
        countUp(number-1);
        cout << number << endl;

    }
}



int main() {
    int number;
    cin >> number;

    countUp(number);



    return 0;
}
