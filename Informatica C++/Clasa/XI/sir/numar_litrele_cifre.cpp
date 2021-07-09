#include <iostream>
using namespace std;

main(){
    char text[500];
    int i, nr_cifre = 0, nr_litere_mici = 0, nr_litere_mari = 0;

    cout << "Dati textul: ";
    cin.get(text,500);

    for(i=0;text[i]!=NULL;i++){
        if(text[i]>=48 && text[i]<=57)
            nr_cifre=nr_cifre+1;}
            cout << endl << "Numarul de cifre este: " << nr_cifre;


    for(i=0;text[i]!=NULL;i++){
        if(text[i]>=65 && text[i]<=90)
            nr_litere_mari=nr_litere_mari+1;}
            cout << endl << "Numarul de litere mari este: " << nr_litere_mari;


    for(i=0;text[i]!=NULL;i++){
        if(text[i]>=97 && text[i]<=122)
            nr_litere_mici=nr_litere_mici+1;}
            cout << endl << "Numarul de litere mici este: " << nr_litere_mici;
}
