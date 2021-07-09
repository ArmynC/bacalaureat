// Se citeste de la tastatura un text. Sa se afiseze numarul de vocale din text.
#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

main(){
    int nr_v = 0, i;
    char s[20],v[]="aeiouAEIOU";

    cout << "Text: ";
    cin.get(s,20);

    for(i=0;i<strlen(s);i++){
        if(strchr(v,s[i]))
            nr_v++;
        s[i]=toupper(s[i]);
    }

    cout << "Numarul de vocale din sir este: " << nr_v;
    cout << endl << "Sirul este: " << s;
}
