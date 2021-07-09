// Sa calculeze N factorial unde N este numar natural.

#include <iostream>
using namespace std;

int main(){
    int nr, f=1, i;

    cout << "Introdu numarul (NR): "; cin >> nr;

    for(i=1;i<=nr;i++)
        f=f*i;

    cout << "N factorial este:" << f;
}

