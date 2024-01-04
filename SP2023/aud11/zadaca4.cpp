//
// Created by Stefan Andonov on 28.12.23.
//


#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main() {

    char contacts[100][100];

    int size = 0;
    while (cin.getline(contacts[size], 100)) {
        if (contacts[size][0] == '#') {
            break;
        }

//        cout << contacts[size] << endl;
        ++size;
    }

    char contact[100];
    cin.getline(contact, 100);

    char type;
    cin >> type;


    for (int i = 0; i < size; i++) {
        if (strstr(contacts[i], contact)){
//            cout << contacts[i];
            //Dusko Pejovski 3244056 071222344
            //d -> од првата цифра до последната цифра
            //m -> od tretiot space do krajot
            if (type=='d'){
                bool flag = false;
                for (int j=0;j<strlen(contacts[i]);j++){
                    if (isdigit(contacts[i][j])){
                        flag = true;
                    }
                    if (isspace(contacts[i][j]) && flag){
                        flag = false;
                        break;
                    }

                    if (flag){
                        cout << contacts[i][j];
                    }


                }
            }
            else {
                for (int j=strlen(contacts[i])-1;j>=0;j--){
                    if (isspace(contacts[i][j])){
                        cout << contacts[i]+j+1;
                        break;
                    }
                }
            }



        }
    }


    return 0;
}