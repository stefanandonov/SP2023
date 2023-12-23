#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, last, beforelast, product, counter, temp, newnumber, ilk, sayi;
    while (cin >> number) {

        while (number) {
            last = number % 10;
            number /= 10;
            beforelast = number % 10;
            number /= 10;
            product = last * beforelast;

            if (product>9){
                number = (number * 100) + product;
            } else {
                number = (number * 10) + product;
            }
            cout << number << endl;
        }
    }


    return 0;
}