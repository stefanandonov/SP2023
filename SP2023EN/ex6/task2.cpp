//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;

void rosary (int n){
    for (int i = 1; i <= n; i++) {
        cout << i;
    }

    cout << endl;

    for (int i = n; i > 0; i--) {
        cout << i;
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    for (int i=1;i<=n;i++){
        rosary(i);
    }



    return 0;
}
