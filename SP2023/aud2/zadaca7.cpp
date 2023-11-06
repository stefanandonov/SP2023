//
// Created by Stefan Andonov on 20.10.23.
//

#include<iostream>

using namespace std;

int main() {
    float radius;
    const float PI = 3.14;
    cin >> radius;

    float perimeter = 2 * radius * PI;
    float area = radius * radius * PI;

    cout << perimeter << endl << area;
    return 0;
}
