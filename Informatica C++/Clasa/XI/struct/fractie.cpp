/* Fie structura fractie cu campurile numarator si numitor de tip intreg. Sa se determine:

a) Fractia inversa.
b) Fractia obtinuta prin inmultirea ei cu un numar citit de la tastatura.
c) Fractia suma.
*/

#include <iostream>
using namespace std;

struct fractie{
    int a, b;
};

main(){
    fractie f, f2, f_inv, fp, fs;
    int n;

    cout << "Fractia: " << endl;
    cout << "-------- " << endl;

    cout << "Dati numaratorul (a): "; cin >> f.a;
    cout << "Dati numitorul (b): "; cin >> f.b;

    cout << endl << "Fractia inversa: ";
    cout << endl << "---------------- " << endl;
    f_inv.a=f.b;
    f_inv.b=f.a;

    cout << "Numaratorul fractiei inverse este: " << f_inv.a << endl;
    cout << "Numitorul fractiei inverse este: " << f_inv.b << endl;
    cout << endl << "Fractia inversata este: " << f_inv.a << "/" << f_inv.b << endl;

    cout << endl << "Fractia inmultita: ";
    cout << endl << "------------------ " << endl;

    cout << "Dati numarul cu care se va inmulti fractia: "; cin >> n;
    fp.a=f.a*n;
    fp.b=f.b;

    cout << endl << "Fractia inmultita este: " << fp.a << "/" << fp.b << endl;

    cout << endl << "Fractia suma: ";
    cout << endl << "------------- " << endl;

    cout << "Dati fractia cu care se va aduna fractia: " << endl;
    cout << "Dati numaratorul: "; cin >> f2.a;
    cout << "Dati numitorul: "; cin >> f2.b;

    /*

    f2.b    f.b
       /      /
        f.a   f2.a   f.a*f2.b+f2.a*f.b
        --- + ---- = -----------------
        f.b   f2.b       f.b*f2.b
    */

    fs.a=f.a*f2.b+f.b*f2.a;
    fs.b=f.b*f2.b;

    cout << endl << "Fractia suma este: " << fs.a << "/" << fs.b;
}
