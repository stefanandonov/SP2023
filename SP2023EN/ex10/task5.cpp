//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include<ctype.h>

using namespace std;

char * clean (char * str){
    char result[101];
    int j = 0;
    for (int i=0;i<strlen(str);i++){
        if (isalpha(str[i])){
            result[j]=str[i];
            j++;
        }
    }
    result[j]='\0';
    return result;
}

bool isPalindrome(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (tolower(str[i]) != tolower(str[length - i - 1])) {
            return false;
        }
    }

    return true;
}

bool isPalindromeR (char * str, int start, int end){
    if (start>=end){
        return true;
    } else {
        if (toupper(str[start])!=toupper(str[end])){
            return false;
        } else {
            return isPalindromeR(str, start+1, end-1);
        }
    }
}


int main() {
    char line[101];

    cin.getline(line, 101);


    cout << isPalindrome(clean(line));


    return 0;
}
