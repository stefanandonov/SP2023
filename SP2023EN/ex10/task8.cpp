//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include<cstring>

using namespace std;

void trim (char * str){
    //01234567891011
    //   make trim

    int start = -1;
    for (int i=0;i<strlen(str);i++){
        if(!isspace(str[i])){
            start = i;
            break;
        }
    }

    strcpy(str, str+start);

    for (int i=strlen(str)-1;i>=0;i--){
        if (!isspace(str[i])){
            str[i+1]='\0';
            break;
        }
    }
}



int main() {

    char str[100];

    cin.getline(str, 100);

    trim(str);

    cout << str;


    return 0;
}
