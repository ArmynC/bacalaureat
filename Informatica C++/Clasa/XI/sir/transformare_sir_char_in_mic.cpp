#include <iostream>
#include <string.h>
using namespace std;

main(){
    char s1[50];
    int i;

    cout << "Dati sirul: ";
    cin.get(s1,50);

    strlwr(s1);

    cout << "Sirul s-a transformat in: " << s1;
}
