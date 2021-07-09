#include <iostream>
#include <string.h>
using namespace std;

main(){
    char s1[20], s2[20];

    cout << "Dati sirul 1: ";
    cin.get(s1,20);

    cout << "Sirul dat de la tastatura este: " << s1 << endl;
    cin.get(); // Fara parametrii (elibereaza memoria).

    cout << endl << "Dati sirul 2: ";
    cin.get(s2,20);

    cout << "Sirul dat de la tastatura este: " << s2 << endl;

    strncpy(s1,s2,3);
    cout << endl << "Sirul 1 va fi: " << s1;

}
