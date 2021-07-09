// Sa se construiasca un subprogram care sa calculeze valoarea absoluta a unui numar real.
// Exemplu de functie operationala.

#include <iostream>
using namespace std;

float absolut(float n){
    if(n<0)

    return -n;
    else return n;
}

main(){
    float n;

    cout << "N: "; cin >> n;
    cout << "|" << N << "| = " << absolut(n);
}
