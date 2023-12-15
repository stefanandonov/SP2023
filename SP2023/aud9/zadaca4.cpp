//
// Created by Stefan Andonov on 15.12.23.
//

#include<iostream>
using namespace std;

int fib (int n) {
    if (n==0 || n==1){
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

double arr (int n) {
    if (n==1 || n==2){
        return n;
    } else {
        return (n-1) * arr(n-1) / (double) n + arr(n-2)/ (double) n;
    }
}

int main (){
    int n;
    cin >> n;

    cout << arr(n);
    return 0;
}