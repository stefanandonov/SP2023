//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;
    int count = 0;

    for (int i = a; i <= b; i++) {

        int reverse = 0;
        int tmp = i;
        while (tmp > 0) {
            int c = tmp % 10;
            reverse = reverse*10+c;
            tmp/=10;
        }

        if (i == reverse){
            cout << i << endl;
            ++count;

        }
    }

    cout << count;


    return 0;
}