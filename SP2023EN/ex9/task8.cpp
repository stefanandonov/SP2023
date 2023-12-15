//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;


int lcm (int a, int b, int divisor){
    if (a==1 && b==1){
        return 1;
    } else {
        if (a%divisor!=0 && b%divisor!=0){
            return lcm (a,b,divisor+1);
        } else {
            if (a%divisor==0){
                a/=divisor;
            }
            if (b%divisor==0){
                b/=divisor;
            }
            return divisor * lcm(a,b,divisor);
        }
    }
}




int main() {

    cout << lcm(48,36,2);





    return 0;
}
