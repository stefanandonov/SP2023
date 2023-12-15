//
// Created by Stefan Andonov on 15.12.23.
//

#include<iostream>

using namespace std;

int sum (int n){
    if (n==1){
        return 1;
    } else {
        return n + sum(n-1);
    }
}

long factorial (int n){
    if (n==1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int n;
    cin >> n;

    cout << factorial(n);
    return 0;
}