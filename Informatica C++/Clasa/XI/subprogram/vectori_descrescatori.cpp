// Citire si afisare numere sub forma unui numar de N vectori descrescatori.

#include <iostream>
using namespace std;

int n, a[100];

void citire(int i){
    if(i!=n)
        citire(i+1);
        cout << "A[" << i << "]: ";
        cin >> a[i];
}

void scriere(int i){
    if(i!=n)
        scriere(i+1);
        cout << a[i] << " ";
}

main(){
    cout << "Numarul de vectori: ";
    cin >> n;

    citire(1);
    scriere(1);
}
