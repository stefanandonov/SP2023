//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include<cstring>

using namespace std;

bool isValid(char password[100]){
    if (strlen(password)<8){
        return false;
    }


    bool hasUpperLetter = false, hasDigit = false, hasSpecChar = false;

    for (int i=0;i<strlen(password);i++){
        if (isupper(password[i])){
            hasUpperLetter = true;
        }
        if (isdigit(password[i])){
            hasDigit = true;
        }
        if (!isalnum(password[i]) && !isspace(password[i])){
            hasSpecChar = true;
        }
    }

    return hasSpecChar && hasDigit && hasUpperLetter;
}


int main() {

    char password[100];

    cin.getline(password, 100);

    cout << isValid(password);


    return 0;
}
