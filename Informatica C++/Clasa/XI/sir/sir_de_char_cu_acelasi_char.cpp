#include <iostream>
#include <string.h>
using namespace std;

main(){
    char s1[50];

    cout << "Dati sirul: ";
    cin.get(s1,50);

    strset(s1,'zzz');

    cout << "Sirul s-a transformat in: " << s1;
}
