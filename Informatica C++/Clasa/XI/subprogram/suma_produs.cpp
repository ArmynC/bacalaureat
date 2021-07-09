// Sa se scrie cate un subprogram pentru fiecare operatie aritmetica de baza pentru primele n numere naturale.

#include <iostream>
using namespace std;

unsigned suma(int n){
    int i;
    unsigned s=0;

    for(i=1;i<=n;i++)
    s=s+i;

    return s;
}

unsigned produs(int n){
    int i;
    unsigned p=1;

    for(i=1;i<=n;i++)
    p=p*i;

    return p;
}

main(){
    int n;

    cout << "Numar (N): "; cin >> n;
    cout << endl << "Suma primelor " << n << " numere este: " << suma(n);
    cout << endl << "Produsul primelor " << n << " numere este: " << produs(n);
}
