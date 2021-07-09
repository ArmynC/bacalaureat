// Verificati daca 2 cuvinte sunt anagrame recusiv.
#include <iostream>
#include <string.h>
using namespace std;

int anagr(char a[100], char b[100], int n){
    if(n==-1)
        return 1;
            if(strchr(a,b[n]))
                return anagr(a,b,n-1);
            else
                return 0;
}

main(){
    char a[100]="", b[100]="";

    cout << "Cuvantul 1: "; cin.get(a,100); cin.get();
    cout << "Cuvantul 2: "; cin.get(b,100); cin.get();

    if(strlen(a)!=strlen(b))
        cout << "Cuvintele nu au acelasi nuamr de caractere.";
    else
        if(anagr(a,b,strlen(b)-1) && anagr(b,a,strlen(a)-1))
            cout << "Cuvintele sunt anagrame.";
        else
            cout << "Cuvintele nu sunt anagrame.";
}
