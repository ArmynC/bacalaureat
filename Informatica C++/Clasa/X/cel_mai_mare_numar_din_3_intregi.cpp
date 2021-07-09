// Sa se determine cel mai mare numar dintre cele 3 numere intregi citite de la tastatura.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;

    cout << "Introdu numarul A: "; cin >> a;
    cout << "Introdu numarul B: "; cin >> b;
    cout << "Introdu numarul C: "; cin >> c;

    if(a>b && a>c)
    {
        cout << "Numarul A(" << a << ") este cel mai mare numar.";
    }

    else if(b>a && b>c)
    {
        cout << "Numarul B(" << b << ") este cel mai mare numar.";
    }
    else if(c>a && c>b)
    {
        cout << "Numarul C(" << c << ") este cel mai mare numar.";
    }
}
