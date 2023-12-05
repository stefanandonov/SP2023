//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int main() {

    int array[100];
    int matrix[100][100];

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) { //mine site redovi
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 1; i < m; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j]!=matrix[j][i]){
                cout << "ASYMMETRIC" << endl;
                return 0;
            }
        }
    }

    cout << "SYMMETRIC" << endl;



    return 0;
}