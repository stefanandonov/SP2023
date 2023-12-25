//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include<cstring>

using namespace std;

int longestDigitSubarrayLength(char *line) {
    //A_man_a*$Plan510123a_canal,PanamA. -> 6
    int maxLength = 0;
    for (int i = 0; i < strlen(line); i++) {
        if (isdigit(line[i])) {
            int counter = 1;
            for (int j = i + 1; j < strlen(line); j++) {
                if (!isdigit(line[j])) {
                    i = j;
                    break;
                }
                ++counter;
            }

            if (counter > maxLength) {
                maxLength = counter;
            }

        }
    }

    return maxLength;
}


int main() {

    char line[100];

    int counter = 1;
    int max = 0;
    int maxLineCounter = 0;

    while (cin.getline(line, 100)) {
        if (line[0] == '#') {
            break;
        }

        int result = longestDigitSubarrayLength(line);

        if (result > max) {
            max = result;
            maxLineCounter = counter;
        }

        ++counter;
    }


    if (maxLineCounter>0){
        cout << maxLineCounter;
    } else {
        cout << "There are no such lines" << endl;
    }



    return 0;
}
