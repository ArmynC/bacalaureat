// Sa se afiseze cel mai mare numar.

#include <iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Dati valoaera numarului a= "; cin >> a;
    cout << "Dati valoaera numarului b= "; cin >> b;

    if (a>b)
        cout << "Numarul cel mai mare este " << a << endl;
    else
        cout << "Numarul cel mai mare este " << b << endl;

    if (a<b)
        cout << "Numarul cel mai mic este " << a << endl;
    else
        cout << "Numarul cel mai mic este " << b << endl;
}
