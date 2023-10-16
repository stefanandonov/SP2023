//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int main() {
    float a, b, c, s, p, l;

    cin >> a >> b >> c;

    l = a + b + c;
    s = l/ 2.0;

    p = s*(s-a)*(s-b)*(s-c);

    cout << "The perimeter is: " << l << " The area is: " << p;
    return 0;
}
