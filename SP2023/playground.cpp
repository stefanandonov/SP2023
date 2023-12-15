#include <iostream>
using namespace std;
int main() {
    int broj;
    int finalnumber;
    while(cin>>broj)
    {
        int tempbroj=broj;
        while(tempbroj>9) {
            int last = tempbroj % 10;
            int pre_last = (tempbroj / 10) % 10;
            int last_two = last + pre_last;

            if (last_two>=10){
                tempbroj = tempbroj/100*100 + last_two;
            } else {
                tempbroj = tempbroj/100*10 + last_two;
            }
            cout << tempbroj << endl;
        }
        cout << tempbroj << endl;

    }

}