#include <iostream>
using namespace std;

main(){
    int i, n, p, aux, j, v[100];

    cout << "Numarul de concurenti (N): ";
    cin >> n;

    cout << "Dati punctajele concurentilor: " << endl;

    for(i=1; i<=n; i++){
        cout << "v[" << i << "]=";
        cin >> v[i];
    }
// Algoritmul de sotare prin selectie.
       for(i=1; i<=n-1; i++){
        for(j=i+1; j<=n; j++){
            if(v[i]<v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

    cout << "Clasamentul ordonat descrescator este: ";
    for(i=1; i<=n; i++)
        cout << v[i] << " ";

    cout << endl << "Ce punctaj cautam? ";
    cin >> p;

    i=1;

    while(v[i] < p){
        i=i+1;
    }

    if(i<=n){
        if(v[i] == p) cout << "Concurentul de pe pozitia " << i << " a obtinut punctajul " << p;
        else cout << "Punctaj inexistent.";
        }
        else cout << "Punctaj inexistent.";
}
