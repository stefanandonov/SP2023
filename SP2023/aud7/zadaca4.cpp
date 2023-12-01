//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>
using namespace std;

int main () {

    int array [100];

    int size;

    cin >> size;
    for (int i=0;i<size;i++){
        cin >> array[i];
    }

    bool asc = true;
    bool desc = true;

    for (int i=1;i<size;i++){
        if (array[i]>array[i-1]){
            desc = false;
        }
        else if (array[i]<array[i-1]){
            asc = false;
        } else {
            asc = desc = false;
        }

//        cout << array[i-1] << " " << array[i] << " " << asc << " " << desc << endl;
    }

    if (asc) {
        cout << "ASCENDING" << endl;
    } else if (desc) {
        cout << "DECENDING" << endl;
    } else  {
        cout << "NEITHER";
    }

    return 0;
}