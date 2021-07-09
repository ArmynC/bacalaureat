// Sa se afiseze numerele de la 1 la 20 in mod crescator si in mod descrescator.

#include <iostream>

using namespace std;

int main(){
    int n, i;

    cout << "Introdu valoarea N: "; cin >> n;

    for(i=n;i<=20;i++)
        cout << i << endl;

    for(i=n;i>=1;i--)
        cout << i << endl;
}
