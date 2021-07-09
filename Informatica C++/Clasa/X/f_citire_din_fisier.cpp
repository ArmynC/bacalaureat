/* 
Creaza prima data fisier "f_citire_din_fisier_date.in" cu valori.
Format: x y z
Exemplu: 1 2 3
*/

#include <fstream>
using namespace std;

ifstream f("f_citire_din_fisier_date.in");
ofstream g("f_citire_din_fisier_date.out");

main() {
    float a, b, c;
    f >> a >> b >> c;
    g << a << " " << b << " "<< c << endl;
    g << "Suma este: " << a+b+c << endl;
    g << "Produsul este: " << a*b*c;
    f.close();
}
