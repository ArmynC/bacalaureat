#include <iostream>
#include <string.h>
using namespace std;

main(){
    cout << "Rezultatul compararii sirurilor 'ab' si 'a' e: " << strcmp("ab","a") << endl;

    cout << "Rezultatul compararii sirurilor 'ab' si 'abc' e: " << strcmp("ab","abc") << endl;

    cout << "Rezultatul compararii sirurilor 'ab' si 'Ab' e: " << strcmp("ab","Ab") << endl;

    cout << "Rezultatul compararii sirurilor (fara distingere) 'Abcd' si 'Abcd' e: " << stricmp("Abcd","Abcd") << endl;

    cout << "Rezultatul compararii sirurilor (fara distingere) 'abcd' si 'Abcd' e: " << stricmp("abcd","Abcd") << endl;

    cout << "Rezultatul compararii sirurilor (fara distingere) 'ab' si 'Abc' e: " << stricmp("ab","Abc") << endl;

    cout << "Rezultatul compararii sirurilor (2 char, fara distingere) 'abcd' si 'Abcd' e: " << strnicmp("abcd","Abcd",2) << endl;

    cout << "Rezultatul compararii sirurilor (4 char, fara distingere) 'abcd' si 'Abcd' e: " << strnicmp("abc","Abc",4) << endl;

    cout << "Rezultatul compararii sirurilor 'ab' si 'Ab' e: " << strcmp("ab","Ab") << endl;

    cout << "Rezultatul compararii sirurilor (fara distingere) 'ab' si 'Ab' e: " << stricmp("ab","Ab") << endl;

    cout << "Rezultatul compararii sirurilor 'ab' si 'A' e: " << strcmp("ab","A") << endl;

    cout << "Rezultatul compararii sirurilor (fara distingere) 'a' si 'A' e: " << stricmp ("a","A") << endl;

    cout << "Rezultatul compararii sirurilor 'abc' si 'abc' e: " << strcmp("abc","abc") << endl;

    cout << "Rezultatul compararii sirurilor (3 char) 'ab' si 'abcd' e: " << strncmp ("abc","abcd",3) << endl;
}
