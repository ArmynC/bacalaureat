#include <iostream>
#include <ctype.h>
using namespace std;

main(){
    char s1[50];
    int i;

    cout << "Dati sirul: ";
    cin.get(s1,50);

    for(i=0;s1[i]!=NULL;i++){
    s1[i]=toupper(s1[i]);
    }

    cout << "Sirul s-a transformat in: " << s1;
}
