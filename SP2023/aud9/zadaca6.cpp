//
// Created by Stefan Andonov on 15.12.23.
//

#include<iostream>
using namespace std;


int eights (int number){
    if (number==0){
        return 0;
    } else {
        int ld = number%10;
        int sld = number/10%10;

        int result = 0;

        if (ld==8){
            result+=1;
            if (sld==8){
                result+=1;
            }
        }

        return result + eights(number/10);
    }
}

int main (){
    int n;
    cin >> n;

    cout << eights(n);
    return 0;
}