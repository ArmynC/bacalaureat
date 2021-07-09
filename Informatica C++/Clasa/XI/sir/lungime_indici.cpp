#include <iostream>
using namespace std;

main(){
    char s[20];
    int i;

    cout << "Dati sirul: ";
    cin.get(s,20);

    cout << "Sirul dat de la tastatura este: " << s;

    for(i=0;s[i]!=NULL;i++);
        cout << endl << "Lungimea sirului este: " << i;
}
