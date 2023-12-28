//
// Created by Stefan Andonov on 22.12.23.
//

#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

bool isValid(char *password) {
    if (strlen(password) < 8) {
        return false;
    }

    //1 bukva, 1 brojka, 1 spec. znak
    int letters = 0, digits = 0, spec = 0;
    for (int i = 0; i < strlen(password); i++) {
        if (isalpha(password[i])) {
            letters++;
        }
        if (isdigit(password[i])){
            digits++;
        }
        if (!isalnum(password[i]) && !isspace(password[i])){ //specijalni znaci
            spec++;
        }
    }

    return letters>0 && digits>0 && spec>0;
}

int main() {

    char password[100];

    cin.getline(password, 100);

    cout << isValid(password);
    return 0;
}
