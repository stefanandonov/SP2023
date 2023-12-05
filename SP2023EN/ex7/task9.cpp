//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include <cmath>

using namespace std;


int main() {

    int array[100];
    int matrix[100][100];

    int m, n; //m=row, n=column
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int sumEvenRows = 0, sumOddColumns = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 1) {
                sumEvenRows += matrix[i][j];
            }
            if (j % 2 == 0) {
                sumOddColumns += matrix[i][j];
            }
        }
    }

    cout << sumEvenRows << " " << sumOddColumns << endl;

    return 0;
}
