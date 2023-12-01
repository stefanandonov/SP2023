//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>
#include<cmath>

using namespace std;

int length(int number) {
    int counter = 0;
    while (number > 0) {
        counter++;
        number /= 10;
    }
    return counter;
}


int firstDigit(int number) {
    return number / int(pow(10, length(number) - 1));
}

int sumOfOtherDigits(int number) {
    int sum = 0;
    while (number >= 10) {
        int ld = number % 10;
        sum += ld;
        number /= 10;
    }
    return sum;
}

int main() {
//    int number = 25;

//    cout << sqrt(number) << endl;
//
//    cout << pow(10,5);

    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        //first digt == sum of other digits
//        cout << i << " " << firstDigit(i) << " " << sumOfOtherDigits(i) << endl;

        if (firstDigit(i) == sumOfOtherDigits(i)) {
            cout << i << endl;
        }
    }


    return 0;
}