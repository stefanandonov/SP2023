//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {

    int tmp,max1,max2;
    int number;

    cin >> max1 >> max2;

    if (max2 > max1){
        tmp = max1;
        max1 = max2;
        max2 = tmp;
    }

    while (cin >> number){
        if (number > max1){
            max2 = max1;
            max1 = number;
        } else if (number > max2) {
            max2 = number;
        }
    }

    cout << max1 << " " << max2;

    return 0;
}
