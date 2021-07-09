// Se citeste de la tastatura o valoare naturala N. Sa se afiseze numarul divizorilor numarului citit.

#include <iostream>
using namespace std;

int main(){
    int n, i;

    cout << "Introdu numarul N: "; cin >> n;

    for (i=1; i<=n; i++)
        if(n%i==0)
            cout << "Numarul divizibil cu N este: " << i << endl;
}
