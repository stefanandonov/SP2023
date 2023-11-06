//
// Created by Stefan Andonov on 16.10.23.
//

#include<iostream>
using namespace std;

int main() {
    float radius;

    cin >> radius;

    float area, perimeter;

    perimeter = 2.0 * radius * 3.14;
    area = radius * radius * 3.14;

    cout << "The perimeter is: " << perimeter << " and the area is: " << area << endl;
    return 0;
}
