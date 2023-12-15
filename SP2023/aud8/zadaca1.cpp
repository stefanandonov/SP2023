//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int linearSearch(int array[], int n, int search) {
    for (int i = 0; i < n; i++) {
        if (array[i] == search) {
            return i;
        }
    }

    return -1;
}

int binarySearch(int array[], int n, int search) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int middle = (start + end) / 2;
        if (array[middle] == search) {
            return middle;
        } else if (search > array[middle]) {
            start = middle;
        } else {
            end = middle;
        }
    }

    return -1;
}

void bubbleSort(int array[], int n) {
    for (int i = 0; i < n; i++) { //na sekoja iteracija na algoritam
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] < array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}


int main() {

    int array[100]; //100 moze, no ne mora da znaci

    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    bubbleSort(array, size);

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }


//    int element;
//    cin >> element;

//    cout << binarySearch(array, size, element);


    return 0;
}