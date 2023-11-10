//
// Created by Stefan Andonov on 13.10.23.
//

#include<iostream>

using namespace std;

int main() {

    int count = 0;
    int a,b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {

        int sum = 0;
        int tmp = i;
        while (tmp >= 10) {
            int c = tmp%10;
            sum+=c;
            tmp/=10;
        }

        int ld = tmp;

        if (sum == ld){
            cout << i << endl;
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}