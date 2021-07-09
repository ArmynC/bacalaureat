// Se citesc N numere intregi de la tastatura. Sa se afiseze maximul si minimul dintre ele si media aritmetica.

#include <iostream>
using namespace std;

int main(){
    int n, v[50], i, minim, maxim, numar, suma=0, ma;

    cout << "Dati numarul de elemente din vector (N): "; cin >> n;

    cout << "Dati elementele vectorului: " << endl;
    for(i=1;i<=n;i++)
    {
        cout << "V[" << i << "]: "; cin >> v[i];
    }

    cout << "Vectorul dat este: ";
    for(i=1;i<=n;i++)
    {
        cout << v[i] << "; ";
    }
    cout << "" << endl;

    maxim = v[1];
    for(i=1;i<=n;i++)
    {
        if(v[i] > maxim)
            maxim = v[i];
    }
    cout <<  "Elementul maxim din vector este: " << maxim << endl;

    minim = v[1];
    for(i=1;i<=n;i++)
    {
        if(v[i] < minim)
            minim = v[i];
    }
    cout << "Elementul minim din vector este: " << minim << endl;

    for(i=1;i<=n;i++)
    {
        suma=suma+v[i];
    }
    ma=suma/n;
    cout << "Media aritmetica este: " << ma << endl;
}
