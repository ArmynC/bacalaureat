// Folosind o functie recursiva, sa se calculeze si sa se afiseze cel mai mare divizor comun a doua numere intregi de la tastatura.

#include <iostream>
using namespace std;

int cmmdc(int a, int b){
    if(a==b)
        return a;
    else
        if(a>b)
            return cmmdc(a-b,b);
        else
            return cmmdc(a,b-a);
}

main(){
    int a, b;

    cout << "Dati A: "; cin >> a;
    cout << "Dati B: "; cin >> b;

    cout << endl << "C.M.M.D.C: " << cmmdc(a,b);
}

