// Scrieti un program C++ care afiseaza numerele divizibile cu 3 din intervalul [a,b]. Valoarile a si b se citesc de la tastatura.

#include <iostream>
using namespace std;

int main(){
    int a, b, i;

    cout << "Introdu intervalul A: "; cin >> a;
    cout << "Introdu intervalul B: "; cin >> b;

    for(i=a;i<=b;i++)
        if(i%3==0)
        cout << "Numarul divizibil cu 3 din intervalul [" << a << " , " << b << "] este:" << i << endl;
}
