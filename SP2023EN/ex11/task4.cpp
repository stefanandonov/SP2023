//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include<cstring>

using namespace std;


int main() {

    int m, n;
    cin >> m >> n;

    int matrix[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;

            for (int k=0;k<n;k++){
                if (k!=j){
                    sum+=matrix[i][k];
                }
            }

            for (int k=0;k<m;k++){
                if (k!=i){
                    sum+=matrix[k][j];
                }
            }

            if (sum%2==1){
                cout << matrix[i][j] << " ";
            }
        }
    }

    return 0;
}
