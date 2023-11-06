#include <iostream>

using namespace std;

int main() {
    int n, max;
    if (cin >> max) {
        while (cin >> n) {
            if (max < n) {
                max = n;
            }
        }
        cout << max;
    } else {
        cout << "Ne e vnesen broj.";
    }
    return 0;
}