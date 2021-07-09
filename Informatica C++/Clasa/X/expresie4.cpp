/* Citeste de la tastatura o valoare naturala N si se afiseaza pe ecran valoarea expresiei:
E= 1*2+2*3+3*4+...+n(n-1)
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, e, i;
    e=0;

    cout << "Introdu numarul N: "; cin >> n;

    for(i=1;i<=n;i++)
        e=e+i*(i+1);

    cout << "Valoarea expresiei este: " << e;
}
