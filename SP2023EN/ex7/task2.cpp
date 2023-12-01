//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include <cmath>

using namespace std;

int main() {
    int array1[100];
    int array2[100];
    int n1, n2;

    //read the first array
    cin >> n1; // size of the first array
    for (int i = 0; i < n1; i++) {
        cin >> array1[i];
    }

    //read the first array
    cin >> n2; // size of the first array
    for (int i = 0; i < n2; i++) {
        cin >> array2[i];
    }

    if (n1!=n2){
        cout << "The arrays have different size, therefore they are not equal" << endl;
        return 0;
    }


    for (int i=0;i<n2;i++){
        if (array1[i]!=array2[i]){
            cout << "The elements on position " << i << "are different and therefore the arrays are not equal" << endl;
            return 0;
        }
    }

    cout << "The arrays are equal" << endl;


    return 0;
}
