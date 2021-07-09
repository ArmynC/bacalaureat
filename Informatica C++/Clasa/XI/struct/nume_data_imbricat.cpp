/* Se citesc de la tastatura date referitoare la o persoana:
- nume;
- prenume;
- data nasterii (definita prin zi, luna, an);

-> Sa se afiseze varsta persoanei */

#include <iostream>
#include <string.h>
using namespace std;

struct data {unsigned zi, luna, an;};
struct persoana
{
    char nume[20], pren[20];
    data data_n;
    unsigned varsta;
};
persoana pers;

main(){
    cout << "Dati datele persoanei " << endl;
    cout << "--------------------- " << endl;
    cout << "Dati numele persoanei: "; cin.get (pers.nume, 20); cin.get();
    cout << "Dati prenumele persoanei: "; cin.get (pers.pren, 20);
    cout << "Dati ziua nasterii persoanei: "; cin >> pers.data_n.zi;
    cout << "Dati luna nasterii persoanei: "; cin >> pers.data_n.luna;
    cout << "Dati anul nasterii persoanei: "; cin >> pers.data_n.an;

    pers.varsta = 2019-pers.data_n.an;
    cout << "Varsta persoanei este: " << pers.varsta;

}

