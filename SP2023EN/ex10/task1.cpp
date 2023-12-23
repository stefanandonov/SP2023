//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include<cstring>

using namespace std;


int main() {

    char str [101];

    cin.getline(str, 101);

//    for (int i = 0; str[i]!='\0'; i++) {
//        cout << str[i] << endl;
//    }


    char * ptr = str;
    while (*ptr!='\0'){
        cout << *ptr << endl;
        ptr++;
    }


//    fgets(str, sizeof(str), stdin);

    cout << str;



    return 0;
}
