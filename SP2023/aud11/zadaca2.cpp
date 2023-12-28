//
// Created by Stefan Andonov on 28.12.23.
//


#include<iostream>
#include<cstring>
using namespace std;


bool isVowel (char letter){
    switch (tolower(letter)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

void transform (char * str){
    for (int i=0;i<strlen(str);i++){
        if (isVowel(str[i])){
            for (int j=i;j<strlen(str);j++){
                str[j]=str[j+1];
            }
            i--;
        }
    }
}


int main () {

    char line [81]; //+1 null terminator

    while (cin.getline(line,81)){

        if (line[0]=='#'){
            return 0;
        }
        //Denes e Ubav den a polagame
        transform(line);

        cout << line << endl;
//        cout << endl;
    }
    return 0;
}