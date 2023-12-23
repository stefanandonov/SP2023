//
// Created by Stefan Andonov on 22.12.23.
//

#include<iostream>
using namespace std;

void clean(char str[101]) {
    for (int i=0;i<strlen(str);i++){
        if (isalpha(str[i])){
            if (islower(str[i])){
                str[i]= toupper(str[i]);
            } else { //golema bukva
                str[i] = tolower(str[i]);
            }
        } else {
            for (int j=i;j<strlen(str);j++){
                str[j]=str[j+1];
            }
            i--;
        }
    }
}

int main () {
    char str [101];
    cin.getline(str,101);

    clean(str);

    cout << str;
    return 0;
}
