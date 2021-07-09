#include <iostream>
#include <string.h>
using namespace std;

main(){
    char s1[50], ch;
    int i;

    cout << "Dati sirul: ";
    cin.get(s1,50);

    cout << "Dati caracterul cautat:";
    cin >> ch;

    if(strrchr(s1,ch) != NULL)
        cout << "Caracterul din extremitatea dreapta, " << ch << " se afla in sir.";
        else cout << "Caracterul din extremitatea dreapta, " << ch << " nu se afla in sir.";

}
