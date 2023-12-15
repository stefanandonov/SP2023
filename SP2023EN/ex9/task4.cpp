//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;


int fib (int position) {
    if (position==0 || position==1){
        return 1;
    } else {
        return fib(position-1) + fib(position-2);
    }
}

float customElementAt (int position) {
    if (position==0){
        return 1.0;
    } else if (position==1){
        return 2.0;
    }
    else {
        return (position-1) * customElementAt(position-1) / (float)position + customElementAt(position-2) / (float)position;
    }
}



int main() {

    int n;
    cin >> n;
    cout << customElementAt(3);

    return 0;
}
