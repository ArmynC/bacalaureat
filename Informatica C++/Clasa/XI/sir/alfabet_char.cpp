#include <iostream>
using namespace std;

main(){
    char i;

    cout << "Literele mici ale alfabetului sunt: ";
    for(i='a';i<='z';i++)
        cout << i << " " ;

    cout << endl << "Literele mari ale alfabetului sunt: ";
    for(i='A';i<='Z';i++)
        cout << i << " ";

    cout << endl << "Literele mici ale alfabetului descrescator sunt: ";
    for(i='z';i>='a';i--)
        cout << i << " " ;

    cout << endl << "Literele mari ale alfabetului descrescator sunt: ";
    for(i='Z';i>='A';i--)
        cout << i << " ";

}
