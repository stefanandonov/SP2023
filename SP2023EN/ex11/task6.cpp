//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include<cstring>

using namespace std;

char transformChar(char letter, int X) {

    char startingLetter;
    if (islower(letter)) {
        startingLetter = 'a';
    } else {
        startingLetter = 'A';
    }

    int position = letter - startingLetter; //0-25 position in the alphabet
    int newPosition = (position + X) % 26;
    char encryptedLetter = char(startingLetter + newPosition);
    return encryptedLetter;
}


void transform (char * line, int X){
    if (*line=='\0'){
        return ;
    } else {
        if (isalpha(*line)){
            *line = transformChar(*line, X);
        }
        return transform(line+1,X);
    }
}


int main() {

    int n,x;
    cin >> n >> x;

    cin.get();

    for (int i=0;i<n;i++){
        char line [100];
        cin.getline(line,100);

        transform(line,x);

        cout << line;
    }



    return 0;
}
