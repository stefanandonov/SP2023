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

    int min, max;
    min = max = matrix[0][0];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j]>max){
                max = matrix[i][j];
            }
            if (matrix[i][j]<min){
                min = matrix[i][j];
            }
        }
    }

//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < m; j++) {
//            if (i==j){
//                matrix[i][j] = max-min;
//            }
//        }
//    }

    for (int i=0;i<m;i++){
        matrix[i][i] = (max-min);
    }



    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
