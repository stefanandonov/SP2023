//
// Created by Stefan Andonov on 15.12.23.
//

#include<iostream>

using namespace std;

bool isPrime(int n, int divisor) {
    if (divisor == 1) {
        return true;
    } else if (n % divisor == 0) {
        return false;
    } else {
        return isPrime(n, divisor-1);
    }
}

int nextPrime (int n){
    if (isPrime(n, n-1)){
        return n;
    } else {
        return nextPrime(n+1);
    }
}

int main() {
    int n;
    cin >> n;

    int next = nextPrime(n+1);

    cout << next << " - " << n << " = " << next - n << endl;
    return 0;
}