//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

char *clean(char *str) {
    char result[201];
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            if (islower(str[i])) {
                result[j] = toupper(str[i]);
            } else { //UPPER letter
                result[j] = tolower(str[i]);
            }
            j++;
        }
    }
    result[j] = '\0';
    cout << result;
    return result;
}


int main() {

    char line[201];
    char result [201];

    cin.getline(line, 201);
    strcpy(result, clean(line));
    cout << result;


    return 0;
}
