//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>

using namespace std;


int main() {
    char large[101], small[21];

    cin.getline(large,101);
    cin.getline(small,21);

    if(strstr(large,small)!=nullptr){
        cout << small << " is a substring of " << large;
    } else {
        cout << small << " is not a substring of " << large;
    }


//    for (int i=0;i<=strlen(large)-strlen(small);i++){
//        if (large[i]==small[0]){
//            int counter = 0;
//            for (int j=0;j<strlen(small);j++){
//                if (small[j]==large[j+i]){
//                    ++counter;
//                } else {
//                    break;
//                }
//            }
//            if (counter==strlen(small)){
//                cout << small << " is a substring of " << large;
//                return 0;
//            }
//        }
//    }

//    cout << small << " is NOT a substring of " << large;


    return 0;
}
