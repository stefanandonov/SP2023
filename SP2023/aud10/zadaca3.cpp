//
// Created by Stefan Andonov on 22.12.23.
//

#include<iostream>
#include<ctype.h>
#include<string>

using namespace std;


void tolowerstr (char * str) {
    while(*str){
        *str = tolower(*str);
        ++str;
    }
}

int main() {
    char big[101];
    char small[101];
    cin.getline(big, 101);
    cin.getline(small, 101);

    char bigC[101];
    char smallC[101];

    strcpy(bigC, big);
    strcpy(smallC, small);


    tolowerstr(bigC);
    tolowerstr(smallC);

    if (strstr(bigC,smallC)){
        cout << small << " is a substring of " << big << endl;
    } else {
        cout << small << " is NOT a substring of " << big << endl;
    }

//    for (int i = 0; i <= strlen(big) - strlen(small); i++) {
//        if (toupper(big[i]) == toupper(small[0])) {
//            bool found = true;
//            for (int j = 0; j < strlen(small); j++) {
//                if (toupper(small[j]) != toupper(big[i + j])) {
//                    found = false;
//                    break;
//                }
//            }
//            if (found) {
//                cout << small << " is a substring of " << big << endl;
//                return 0;
//            }
//        }
//    }
//
//    cout << small << " is NOT a substring of " << big << endl;


    return 0;
}
