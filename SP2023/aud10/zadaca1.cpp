//
// Created by Stefan Andonov on 22.12.23.
//

#include<iostream>
using namespace std;

int count (char * str, char c){
    int counter = 0;
    for (int i=0;i<strlen(str);i++){
        if (str[i] == c){
            ++counter;
        }
    }
    return counter;
}


int count2 (char * str, char c){
    int counter = 0;
    while (*str){
        if (*str == c) {
            ++counter;
        }
        ++str;
    }
    return counter;
}



int main () {
    char str [101]; //100 + 1 za null terminator
    cin.getline(str, 101);
//    cin >> str;
    char character;

    cin >> character;

    cout << str << " " << character;
    cout << count2(str, character);
    return 0;
}
