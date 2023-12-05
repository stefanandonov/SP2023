//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int main() {

    int array[100];
    int matrix[100][100];
    int mines[100][100];

    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) { //mine site redovi
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            mines[i][j] = 0;
        }
    }

    int countPlus = 0;
    for (int i = 1; i < m - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (matrix[i][j] == 1 &&
                matrix[i][j - 1] == 1 &&
                matrix[i][j + 1] == 1 &&
                matrix[i - 1][j] == 1 &&
                matrix[i + 1][j] == 1) {
                if (mines[i][j] != 1 &&
                    mines[i][j - 1] != 1 &&
                    mines[i][j + 1] != 1 &&
                    mines[i - 1][j] != 1 &&
                    mines[i + 1][j] != 1) {
                    countPlus++;
                    mines[i][j] = mines[i][j - 1] = mines[i][j + 1] = mines[i - 1][j] = mines[i + 1][j] = 1;

                }

            }
        }
    }

    cout << countPlus;


    return 0;
}