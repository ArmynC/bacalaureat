#include <iostream>
using namespace std;

struct elev
{
    char nume[20], prenume[20];
    float nota_mate, nota_info, nota_geografie;
    int varsta;
};

main(){
    elev E;

    cout << "Dati numele elevului: ";
    cin.get(E.nume,20);
    cin.get();

    cout << "Dati prenumele elevului: ";
    cin.get(E.prenume,20);

    cout << "Dati nota la mate: ";
    cin >> E.nota_mate;

    cout << "Dati nota la info: ";
    cin >> E.nota_info;

    cout << "Dati nota la geografie: ";
    cin >> E.nota_geografie;

    cout << "Dati varsta elevului: ";
    cin >> E.varsta;

    cout << "Ati introdus urmatoarele date: " << E.nume << " " << E.prenume << " cu varsta de: " << E.varsta << " ani, are nota la mate: " << E.nota_mate << " ,nota la info: " << E.nota_info << " si nota la geografie: " << E.nota_geografie;
}
