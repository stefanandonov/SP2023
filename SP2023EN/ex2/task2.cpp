//
// Created by Stefan Andonov on 12.10.23.
//

#include<iostream>

using namespace std;

int main (){
    float x = 3/2 + (5 - 46*5/12);
    // 3/2 = 1; 46*5/12 = 230/12 = 19

    float correct = 3/2.0 + (5 - 46*5/12.0);
    cout << x << " " << correct;
    return 0;
}


