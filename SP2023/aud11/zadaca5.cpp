//
// Created by Stefan Andonov on 28.12.23.
//


#include<iostream>
using namespace std;

int main () {

    int m,n; //golemina na niva
    int fields [100][100];
    cin >> m >> n;

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            fields[i][j]=0;
        }
    }

    fields[0][0]=0;

    int appleI, appleJ; //koordinati na jabolkoto
    cin >> appleI >> appleJ;

    cin.get(); //za da se ignorira noviot red posle brojkata appleJ

    char commands [1001];
    cin.getline(commands, 1001);

//    cout << m << " " << n << " " << appleI << " " << appleJ << " " << commands;

    int snakeI=0, snakeJ=0;
    int dI=1, dJ=0;

    for (int i=0;i<strlen(commands);i++){
        char command = commands[i];
        switch (command) {
            case 'L':
            case 'R':
                if (dJ==0){
                   if (command=='R'){
                       dI*=-1;
                   }
                    swap(dI, dJ);
                } else { //dj == 1 ili -1
                    if (command=='L'){
                        dJ*=-1;
                    }
                    swap(dI, dJ);
                }
                break;
            case 'F':
                break;
            default:
                cout << "ERROR";
                return 0;
        }

        snakeI+=dI;
        snakeJ+=dJ;

        if (snakeI==appleI && snakeJ==appleJ){
            cout << "NJAM";
            return 0;
        }

        if (snakeI<0 || snakeI>=m || snakeJ<0 || snakeJ>=n){
            cout << "GAME OVER Ouch";
            return 0;
        }

        if (fields[snakeI][snakeJ]==1){
            cout << "GAME OVER Ouch";
            return 0;
        } else {
            fields[snakeI][snakeJ]=1;
        }
    }

    cout << "GAMEOVER";

//    char * ptr = commands;
//    while (*ptr!=0){
//        char command = *ptr;
//
//        ptr++;
//    }
    return 0;
}