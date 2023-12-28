//
// Created by Stefan Andonov on 22.12.23.
//

#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

void trim(char *str) {
    //ind. 012345678910
    //str =   make   \0

    int startIndex = -1;
    for (int i = 0; i < strlen(str); i++) {
        if (!isspace(str[i])) {
            startIndex = i;
            break;
        }
    }
    //str+3 -> make   \0
    strcpy(str, str + startIndex);

    //      01234567
    //str = make   \0

    for (int i = strlen(str) - 1; i >= 0; i--) {
        if (!isspace(str[i])){
            str[i+1] = '\0';
            break;
        }
    }
    //str = make\0
}

int main() {

    char str[100];
    cin.getline(str, 100);

    trim(str);

    cout << str;
    return 0;
}
