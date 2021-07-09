#include <iostream>
#include <string.h>
using namespace std;

main(){
    char s[999];

    cout << "Dati sirul: ";
    cin.get(s,999);

    cout << "Sirul dat de la tastatura este: " << s;

    cout << endl << "Lungimea sirului este: " << strlen(s);
}
