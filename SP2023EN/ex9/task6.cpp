//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;


int eights(int number){
    if (number==0){
        return 0;
    } else {
        int ld = number%10;
        int sld = number/10%10;
        if (ld!=8){
            return eights(number/10);
        } else { //ld == 8
            if (sld==8){
                return 2 + eights(number/10);
            } else {
                return 1 + eights(number/10);
            }
        }
    }
}




int main() {
    int number;
    cin >> number;
    cout << eights(number);

    return 0;
}
