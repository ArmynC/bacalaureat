// Sa se calculeze suma elementelor unui vector.

#include <iostream>
using namespace std;

void citire(int n, int x[]){
    int i;

    for(i=1;i<=n;i++){
        cout << "X[" << i << "]: ";
        cin >> x[i];
    }
}

void afisare(int n, int x[]){
    int i;

    for(i=1;i<=n;i++)
        cout << x[i] << " ";
}

long suma(int n, int x[]){
    if(n==0)
        return 0;
    else
        return suma(n-1,x)+x[n];
}

main(){
    int a[10], n;

    cout << "Dati numarul de vectori: "; cin >> n;

    cout << endl << "Dati vectorul: "; cout << endl; citire(n,a);

    cout << endl << "Valorile vectorului sunt: "; afisare(n,a);

    cout << endl << endl << "Suma vectorilor este: " << suma(n,a);

}
