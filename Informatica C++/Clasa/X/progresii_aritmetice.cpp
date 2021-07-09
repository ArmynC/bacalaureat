// Se citesc 3 nr. a, b, c. Sa se verifice daca pot fi termenii unei progresii aritmetice.

#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cout << "Dati valoarea numarului A= "; cin >> a;
    cout << "Dati valoarea numarului B= "; cin >> b;
    cout << "Dati valoarea numarului C= "; cin >> c;

    if(a==(b+c)/2 || b==(a+c)/2 || c==(a+b)/2)
        cout << "Numerele pot fi termenii unei progresii aritemtice.";
    else
        cout << "Numerele nu pot fi termenii unei progresii aritemtice.";

}
