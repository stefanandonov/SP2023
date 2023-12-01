//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int main() {
    int array[100];

    int size;

    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int k; //shift na desno poziici
    cin >> k;

    int tmp[100];

    //1. Poslednite k elementi gi smestuvame vo temp
    for (int i = size - k; i < size; i++) {
        tmp[i - size + k] = array[i];
    }

    //2. Gi transformirame elementite posle prvite k element
    for (int i = size - 1; i >= k; i--) {
        array[i]=array[i-k];
    }

    //3. Gi stavame temp elementite na pocetokot na array
    for (int i=0;i<k;i++){
        array[i] = tmp[i];
    }

    for (int i=0;i<size;i++){
        cout << array[i] << " ";
    }


    return 0;
}