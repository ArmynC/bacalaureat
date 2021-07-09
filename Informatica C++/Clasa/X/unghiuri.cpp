// Se considera doua masuri de unghiuri exprimate in grade, minute si, respectiv secunde: g1, m1, s2; g2, m2, s2.
// Sa se calculeze si sa se afiseze suma celor doua unghiuri, exprimate tot in grade, minute, respectiv secunde.

/*
1)  2* 45' 55"
2) 12* 55' 45"
   -----------
   15* 41' 40"
*/

#include <iostream>
#include <math.h>
using namespace std;

main(){
    int g1, m1, s1, g2, m2, s2, s, m, g;

    cout << "Dati gradele unghiului 1: "; cin >> g1;
    cout << "Dati minutele unghiului 1: "; cin >> m1;
    cout << "Dati secundele unghiului 1: "; cin >> s1;
    cout << "Dati gradele unghiului 2: "; cin >> g2;
    cout << "Dati minutele unghiului 2: "; cin >> m2;
    cout << "Dati secundele unghiului 2: "; cin >> s2;

    s=(s1+s2)%60;
    m=((m1+m2)+(s1+s2)/60)%60;
    g=((g1+g2)+(m1+m2)/60);

    cout << "Gradele (*) sunt: " << g << endl;
    cout << "Minutele (') sunt: " << m << endl;
    cout << "Secundele ('') sunt: " << s << endl;
}
