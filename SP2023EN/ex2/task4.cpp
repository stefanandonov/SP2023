//
// Created by Stefan Andonov on 12.10.23.
//

#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int perimeter = a + b + c;
    float s = perimeter / 2.0;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area: " << area << " Perimeter: " << perimeter;
    return 0;
}


