//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include<cstring>

using namespace std;


int main() {
    int m, n, k, l;
    cin >> m >> n >> k >> l;
    cin.get();
    int visitedPositions [100][100] = {};

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            visitedPositions[i][j]=0;
        }
    }

    char commands[1000];
    cin.getline(commands, 1000);

    int r = 0, c = 0; //the location of the snake at the moment

    int directionRow = 1, directionColumn = 0;


    for (int i = 0; strlen(commands); i++) {
        char command = commands[i];
        if (command != 'F') { //L or R
            if (directionColumn == 0) {
                directionColumn = (command == 'L') ? directionRow : -directionRow;
                directionRow = 0;
            } else {
                directionRow = (command == 'L') ? -directionColumn : directionColumn;
                directionColumn = 0;
            }
        }

        r += directionRow;
        c += directionColumn;

        if (r>=0 && r<m && c>=0 && c<n){
            if (visitedPositions[r][c]==1){
                cout << "GAME OVER Ouch";
                return 0;
            }
        } else {
            cout << "GAME OVER Ouch";
            return 0;
        }

        if (r==k && c==l){
            cout << "NJAM";
            return 0;
        }

        visitedPositions[r][c]=1;
    }

    cout << "GAME OVER" << endl;
    return 0;
}
