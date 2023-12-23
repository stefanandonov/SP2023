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
int main () {
    char str [101];
    cin.getline(str,101);

    cout << isPalindromeR(str, 0, strlen(str)-1);
    return 0;
}
