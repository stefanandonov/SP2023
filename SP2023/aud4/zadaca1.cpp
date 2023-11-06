//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

    //edge cases
    if (x == 0 && y == 0) {
        cout << "Coordinate center" << endl;
        return 0;
    }
    if (x == 0) {
        cout << "y axis" << endl;
        return 0;
    }
    if (y == 0) {
        cout << "x axis" << endl;
        return 0;
    }


    if (x>0 && y>0){
        cout << 1 << endl;
    }
    else if (x<0 && y>0){
        cout << 2 << endl;
    }
    else if (x<0 && y<0) {
        cout << 3 << endl;
    }
    else if (x>0 && y<0) { //this one can just be an else
        cout << 4 << endl;
    }




    return 0;
}