// Se citesc date referitoare la elevii unei clase. Sa se afiseze elevii nascuti in luna februarie.
#include <iostream>
#include <string.h>
using namespace std;

struct data {
    unsigned zi, luna, an;
};
struct elev{
    char nume[20], prenume[20];
    data data_n;
    unsigned varsta;
};
elev e[30];

int n,i;

main(){
    cout << "Dati numarul de elevi din clasa: "; cin >> n;

    for(i=1;i<=n;i++){
        cout << "Numele: "; cin >> e[i].nume;
        cout << "Prenumele: "; cin >> e[i].prenume;
        cout << "Ziua nasterii: "; cin >> e[i].data_n.zi;
        cout << "Luna nasterii: "; cin >> e[i].data_n.luna;
        cout << "Anul nasterii: "; cin >> e[i].data_n.an;

        e[i].varsta=2019-e[i].data_n.an;
        cout << "Varsta: " << e[i].varsta << endl;
    }

    cout << endl << "Elevi nascuti in luna februarie sunt: " << endl;
    for(i=1;i<=n;i++){
        if(e[i].data_n.luna == 2)
            cout << e[i].nume << " " << e[i].prenume << endl;
    }
}
