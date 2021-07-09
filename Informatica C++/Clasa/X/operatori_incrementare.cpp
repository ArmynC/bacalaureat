/* Evaluati expresia:
E = ++a*b++
a= 2
b= 3
=>
E = 3*3++
E = 9
=>
a=3
b= 4
*/

#include <iostream>
using namespace std;

main(){
    int a, b, e;

    cout << "Dati a="; cin >> a;
    cout << "Dati b="; cin >> b;

    e=++a*b++;

    cout << "Expresia este= " << e << "\n";
    cout << "Dupa verificare, a=" << a << "\n";
    cout << "Dupa verificare, b=" << b;
}
