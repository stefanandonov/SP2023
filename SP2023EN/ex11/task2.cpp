//
// Created by Stefan Andonov on 1.11.23.
//

#include<iostream>
#include<cstring>

using namespace std;

void transform (int * array, int n){
    int evens[100];
    int odds[100];

    int j=0,k=0;

    for (int i=0;i<n;i++){
        if (array[i]%2==0){
            evens[j++]=array[i];
        }
    }

    for (int i=n-1;i>=0;i--){
        if (array[i]%2==1){
            odds[k++]=array[i];
        }
    }


    for (int i=0;i<j;i++){
        array[i]=evens[i];
    }

    for (int i=0;i<k;i++){
        array[i+j]=odds[i];
    }
}


int main() {

    int array [100];
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> array[i];
    }

    transform(array,n);

    for (int i=0;i<n;i++){
        cout << array[i] << " ";
    }

    return 0;
}
