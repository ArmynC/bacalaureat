/*
Se citesc de la tastatura numerele intregi n,a,b,c. Sa se calculeze valoarea definita astfel:
  [ (a+b)/c, pentru n=1
E=[ (b+c)/a, pentru n=2
  [ (c+a)/b, pentru n=3
*/

#include <iostream>
using namespace std;

main(){
    int n, a, b, c, e;

    cout << "Introdu n="; cin >> n;
    cout << "Introdu a="; cin >> a;
    cout << "Introdu b="; cin >> b;
    cout << "Introdu c="; cin >> c;

    if (n==1){
        e=(a+b)/c;
    }

    else if (n==2){
        e=(b+c)/a;
    }

    else if (n==3){
        e=(c+a)/b;
    }
    cout << "Expresia este:"<<e;
}
