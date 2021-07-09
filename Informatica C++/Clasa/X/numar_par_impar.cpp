// Sa se verifice daca numarul este par sau impar.

#include <iostream>
using namespace std;

int main(){
    int nr;

    cout << "Dati valoarea numarului: "; cin >> nr;

    if(nr%2==0)
    {
        cout << "Numarul " << nr  <<" este par.";
    }
    else if(nr%2!=0)
    {
        cout << "Numarul " << nr << " este impar.";
    }
}
