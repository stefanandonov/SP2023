//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include <cmath>

using namespace std;


int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int min, max;
        min = max = a;

//        min = std::min(std::min(a,b),c);
//        max = std::max(std::max(a,b),c);

        if (b < min) {
            min = b;
        }
        if (c < min) {
            min = c;
        }

        if (b > max) {
            max = b;
        }
        if (c > max) {
            max = c;
        }

        float res = 2*min - max/2.0 + abs(min-a);
        cout << res << endl;


    }


    return 0;
}
