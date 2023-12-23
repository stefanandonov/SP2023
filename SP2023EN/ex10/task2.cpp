//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int length (char * str){
    int count = 0;
    while (*str!='\0'){
        ++count;
    }
    return count;
}

int countOccurrences (char * str, char search){
    int count = 0;
    for (int i=0;i<strlen(str);i++){
        if (str[i]==search){
            ++count;
        }
    }
    return count;
}


int main() {

    char line[101];

    cin.getline(line, 101);

    char search;
    cin >> search;

    cout << countOccurrences(line, search);




    return 0;
}
