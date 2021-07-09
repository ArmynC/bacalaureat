// Se citesc 4 nr. intregi A, B, C, D. Sa se determine care dintre produsele AxB sau CxD este mai mare.

#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;

    cout << "Dati valoarea numarului A= "; cin >> a;
    cout << "Dati valoarea numarului B= "; cin >> b;
    cout << "Dati valoarea numarului C= "; cin >> c;
    cout << "Dati valoarea numarului D= "; cin >> d;

    if (a*b > c*d)
        cout << "Produsul cel mai mare este A*B, care este egal cu:" << a*b << endl;
    else
        cout << "Produsul cel mai mare este C*D, care este egal cu:" << c*d << endl;



}
