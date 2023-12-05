//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include <cmath>

using namespace std;


int main() {
    int matrix[100][100];

    int m, n; //m=row, n=column
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int counter = 0;

    for (int i = 1; i < m - 1; i++) {
        bool crossFound = false;
        for (int j = 1; j < n - 1; j++) {
            if (matrix[i][j] == 1 &&
                matrix[i - 1][j] == 1 &&
                matrix[i + 1][j] == 1 &&
                matrix[i][j - 1] == 1 &&
                matrix[i][j + 1] == 1) {
                ++counter;
                j+=2;
                crossFound = true;
            }
        }
        if (crossFound){
            i+=2;
        }
    }

    cout << counter << endl;


    return 0;
}
