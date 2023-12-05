//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include <cmath>

using namespace std;


int main() {

    int array[100];
    int matrix[100][100];

    int m; //m=row, m=column
    cin >> m;


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    bool symmetrical = true;

    for (int i = 1; i < m; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j]!=matrix[j][i]){
                symmetrical = false;
                break;
            }
        }
        if (!symmetrical){
            break;
        }
    }

    if (symmetrical){
        cout << "symmetrical" << endl;
    } else {
        cout << "asymmetrical" << endl;
    }

    return 0;
}
