// Se citeste un numar real sub forma unui sir de caractere. Sa se afiseze partea intreaga si partea zecimala si numarul de cifre din care eset formata.
#include <iostream>
#include <string.h>
using namespace std;

main(){
    char nr[20];

    cout << "Dati numarul: ";
    cin.get(nr,19);

    cout << "Parea intreaga este: " << strtok(nr,",") << endl;
    cout << "Parea fractionara este: " << strtok(NULL,",") << endl;
    cout << "Partea intreaga are un numar de: " << strlen(strtok(nr,",")) << " caractere";
}
