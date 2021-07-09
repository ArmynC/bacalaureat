  // Scrieti un program pentru introducerea si afisarea cifra cu cifra a codului numeric personal.

#include <iostream>
using namespace std;

main(){
    unsigned short c[13];
    short i;

    cout << "Dati cifrele codului numeric personal: " << endl;

    for(i=0; i<13; i++){ // Secventa de citire a cifrelor.
        cout << "c[" << i << "]=";
        cin >> c[i];
    }

    cout << "CNP-ul este: " << endl;

    for(i=0; i<13; i++) // Secventa de afisare a CNP-ului.
        cout << c[i];
}
