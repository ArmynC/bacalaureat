// Sa se construiasca un subprogram care sa calculeze valoarea absoluta a unui numar real.
// Exemplu de functie procedurala.

#include <iostream>
using namespace std;

void modul(float n){
    if(n>=0)

    cout << n;
    else cout << -n;
}

main(){
    float n;

    cout << "N: "; cin >> n;
    cout << "|" << n << "| = ";

    modul(n);
}
