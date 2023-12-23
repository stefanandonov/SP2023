//
// Created by Stefan Andonov on 22.12.23.
//

#include<iostream>
using namespace std;

bool isPalindromeR (char * str, int left, int right){
    if (left>=right){
        return true;
    }
    if (str[left]!=str[right]){
        return false;
    }
    return isPalindromeR(str, left+1, right-1);
}

void clean(char str[101]) {
    char tmp[101];
    int j=0;
    for (int i=0;i<strlen(str);i++){
        if (isalpha(str[i])){
            tmp[j++]=tolower(str[i]);
        }
    }

    tmp[j]='\0';
    strcpy(str,tmp);
}

int main () {
    char str [101];
    cin.getline(str,101);

    clean(str);

    cout << isPalindromeR(str, 0, strlen(str)-1);
    return 0;
}
