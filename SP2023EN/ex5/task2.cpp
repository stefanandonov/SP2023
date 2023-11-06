//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int reversed = 0;
        int tmp = i;
        while (tmp) { //go until the number is 0 i.e., it's destroyed.
            int ld = tmp % 10; //we get the last digit from the number
            reversed = 10 * reversed + ld;
            tmp /= 10; //delete the last digit from the number
        }

        if (i == reversed){
            cout << i << endl;
        }

//        cout << i << " " << reversed << endl;
    }




    return 0;
}
