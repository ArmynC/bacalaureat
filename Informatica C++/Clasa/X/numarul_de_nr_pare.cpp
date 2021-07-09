// Se citesc 3 numere A, B, C. Sa se numere cate nr. sunt pare.

#include <iostream>
using namespace std;

int main(){
    int a, b, c, nr;
    nr=0;

    cout << "Dati valoarea numarului A= "; cin >> a;
    cout << "Dati valoarea numarului B= "; cin >> b;
    cout << "Dati valoarea numarului C= "; cin >> c;

    if(a%2==0)
        nr=nr+1;
    if(b%2==0)
        nr=nr+1;
    if(c%2==0)
        nr=nr+1;

    cout << "Sunt " << nr << " numere pare.";
}
