// Un produs are pretul unitar n lei, se aplica TVA de t% (n, t nr. nat. citite).
// Afiseaza pretul de vanzare.

#include <iostream>
using namespace std;

int main()
{
    float n, t;
    cout << "Numarul: "; cin >> n;
    cout << "TVA: "; cin >> t;
    cout << n+((n/100)*t);
}