//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int linearSearch(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
}

int binarySearch(int array[], int size, int element) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int middle = (start + end) / 2;
        if (array[middle] == element) {
            return middle;
        } else if (element > array[middle]) {
            start = middle;
        } else {
            end = middle;
        }
    }

    int middle = (start + end) / 2;
    if (array[middle] == element) {
        return middle;
    } else {
        return -1;
    }
}


int main() {
    int array[100];
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
//
//    cout << binarySearch(array, size, element);

    return 0;
}
