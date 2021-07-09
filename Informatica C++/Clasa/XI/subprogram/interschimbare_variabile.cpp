// Sa se construiasca un subprogram care sa realizeze inetschimbaera valorilor a doua variabile de memorie intregi.
// Exemplu program transfer parametrii prin referinta.

#include <iostream>
using namespace std;

int schimb(int &a, int &b){
int z;
z=a;
a=b;
b=z;
}

main(){
    int x, y;

    cout << "Dati X= "; cin >> x;
    cout << "Dati Y= "; cin >> y;

    schimb(x,y);

    cout << endl << "X: " << x << " Y: " << y;
}
