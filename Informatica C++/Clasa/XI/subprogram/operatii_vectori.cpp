#include <iostream>
using namespace std;

void citire(int x[], int n){
    int i;

    for(i=1;i<=n;i++){
        cout << "x["<<i<<"]=";
        cin >> x[i];
    }
}

void afisare(int x[], int n){
    int i;

    for(i=1;i<=n;i++)
        cout << x[i] << " ";
}

void suma(int x[], int y[], int z[], int n){
    int i;

    for(i=1;i<=n;i++)
        z[i]=x[i]+y[i];
}

void produs(int x[], int y[], int z[], int n){
    int i;

    for(i=1;i<=n;i++)
        z[i]=x[i]*y[i];
}

void sortare(int x[], int n){
    int i, j, aux;

    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(x[i]>x[j]){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
}
main(){
    int a[20], b[20], c[20], n;

    cout << "Cate numere? (N): "; cin >> n;

    cout << endl << "Dati primul vector: " << endl;
    citire(a,n);

    cout << endl << "Dati al doilea vector: " << endl;
    citire(b,n);

    cout << "--------------------------------------------------------";
    cout << endl << "> Vectorul suma este: ";
    suma(a,b,c,n);

    afisare(c,n);
    sortare(c,n);

    cout << endl << "> Vectorul suma sortat crescator este: ";
    afisare(c,n);
    cout << endl << "--------------------------------------------------------";

    cout << endl << "--------------------------------------------------------";
    cout << endl << "> Vectorul produs este: ";
    produs(a,b,c,n);

    afisare(c,n);
    sortare(c,n);

    cout << endl << "> Vectorul produs sortat crescator este: ";
    afisare(c,n);
    cout << endl << "--------------------------------------------------------";
}
