//
// Created by Stefan Andonov on 22.12.23.
//

#include<iostream>

using namespace std;

int main() {
    char str[101];
    cin.getline(str, 101);

    int start, len;
    cin >> start >> len;

//    for (int i = start; i < start + len && i < strlen(str); i++) {
//        cout << str[i];
//    }

//    cout << (str+start);
    char result [101];
    strncpy(result, str+start, len);
    cout << result;
    return 0;
}
