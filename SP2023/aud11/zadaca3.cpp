//
// Created by Stefan Andonov on 28.12.23.
//


#include<iostream>

using namespace std;

int similarity(int x, int y) {
    if (x == 0 || y == 0) {
        return 0;
    } else {
        if (x % 10 == y % 10) {
            return 1 + similarity(x / 10, y / 10);
        } else {
            return similarity(x / 10, y / 10);
        }
    }
}

int main() {
    int x;

    cin >> x;

    int y;

    int maxSimilarity = 0;
    int maxNumber;

    while (cin >> y) {
//        cout << x << " " << y << " " << similarity(x, y) << endl;
        if (similarity(x, y) > maxSimilarity) { //>= ako beshe vo tekstot da se ispecati posledniot takov broj
            maxSimilarity = similarity(x, y);
            maxNumber = y;
        }
    }

    cout << maxNumber;
    return 0;
}