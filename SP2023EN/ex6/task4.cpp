//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {

    int current, predecessor;

    cin >> predecessor >> current;

    int sum;
    sum = predecessor + current;
    int maxSum = sum;

    int position = 2;
    int maxPosition = position;

    predecessor = current;

    while (cin >> current){

        sum = predecessor + current;
        position++;
        if (sum > maxSum){
            maxSum = sum;
            maxPosition = position;
        }

        predecessor = current;
    }

    cout << maxSum << " " << maxPosition;
    return 0;
}
