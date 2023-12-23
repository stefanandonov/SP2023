//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;


int main() {

    char str[101];
    cin.getline(str, 101);

    int start, length;
    cin >> start >> length;

//    for (int i=start;i<length+start && i<strlen(str);i++){
//        cout << str[i];
//    }

    char substr[101];

//    cout << str+start;

    strncpy(substr, str+start, length);
    cout << substr;


    return 0;
}
