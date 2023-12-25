//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include<cstring>

using namespace std;

bool isVowel (char c){
    c = tolower(c);
    return c=='a' || c=='e' || c=='u' || c=='o' || c=='i';
}

void clean (char * line){
    for (int i=0;i<strlen(line);i++){
        if (isVowel(line[i])){
            for (int j=i;j<strlen(line);j++){
                line[j]=line[j+1];
            }
            --i;
        }
    }
}


int main() {

    char line [100];

    while(cin.getline(line,100)){
        if (line[0]=='#'){
            break;
        }
        clean(line);
        cout << line << endl;
//        cout << endl;
    }
    return 0;
}
