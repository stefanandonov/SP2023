//
// Created by Stefan Andonov on 20.10.23.
//

#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    float average;

    cin >> a >> b >> c;

    int sum = a + b + c;
    average = sum / 3.0;

    cout << "Average is: " << average;
    return 0;
}
