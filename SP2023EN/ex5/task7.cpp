//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i=0;i<n;i++){
        int number;
        cin >> number;

        switch (number%5) {
            case 0:
                cout << "-----" << endl; break;
            case 1:
                cout << ".----" << endl; break;
            case 2:
                cout << "..---" << endl; break;
            case 3:
                cout << "...--" << endl; break;
            default:
                cout << "....-" << endl; break;

        }
    }

    return 0;
}
