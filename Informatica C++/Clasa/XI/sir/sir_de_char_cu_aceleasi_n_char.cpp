#include <iostream>
#include <string.h>
using namespace std;

main(){
    char s1[50];

    cout << "Dati sirul: ";
    cin.get(s1,50);

    strnset(s1,'zzz',5);

    cout << "Sirul s-a transformat in: " << s1;
}
