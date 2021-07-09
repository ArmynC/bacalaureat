// Se citesc 3 nr. reale A, B, C. Ele pot forma laturile unui triunghi. Afiseaza: a) echilateral; b) isoscel; c) dreptunghic.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c;

    cout << "Defineste latura A: "; cin >> a;
    cout << "Defineste latura B: "; cin >> b;
    cout << "Defineste latura C: "; cin >> c;

    if((a<b+c)&&(b<a+c)&&(c<b+a))
    {
        cout << "Se poate forma un triunghi. ";
    }

    if((a==b) && (b==c))
    {
        cout << "Triunghiul este echilateral." << endl;
    }
    else if(a==b || a==c || b==c)
    {
        cout << "Triunghiul este isoscel." << endl;
    }
    else if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
    {
        cout << "Triunghiul este dreptunghic." << endl;
    }

    else
    {
        cout << "Triunghi este oarecare." << endl;

    }
}
