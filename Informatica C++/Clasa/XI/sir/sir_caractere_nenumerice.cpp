// Se citeste un sir de caractere ce nu contin caractere albe. Sa se verifice daca sirul este alcatuit exclusiv din caractere nenumerice.

#include <iostream>
#include <string.h>
using namespace std;

main(){
    char sir[200], cifre[]="0123456789";

    cout << "Dati numarul: ";
    cin.get(sir,190);

    if(strcspn(cifre,sir)==10)
        cout << "Corect!";
        else cout << "Incorect!";
}
