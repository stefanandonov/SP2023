//
// Created by Stefan Andonov on 20.10.23.
//

#include<iostream>

using namespace std;

int main() {
    int m = 1;

//    cout << (6 <= m <= 9); NOOOOOO GOD NOOOOOO!
    int x = 5;
//    if (x==1){
////        cout << "YESSSS";
////    } else {
////        cout << "NOOOO";
////    }

    cout << x << endl;
    cout << x++ << endl;
    cout << x << endl;


    int sum = 0;
    //hamburger
    sum += 200; // sum = sum + 200;
    //kombiniran
    sum += 150;
    //majonez
    sum += 10;

    sum += 90; //delivery fee

    int year = 2006;

    int polnoletni = 0;

    if (year < 2005) {
        polnoletni++;
        cout << "Polnoleten";
    }
    else {
        cout << "Maloleten";
    }



    return 0;
}
