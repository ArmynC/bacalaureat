#include <iostream>
using namespace std;

main(){
    int i, n, val, v[5];

    cout << "Numarul de elemente din vector este (N): ";
    cin >> n;

    cout << "Dati elementele vectorului: " << endl;

    for(i=1; i<=n; i++){
        cout << "v[" << i << "]=";
        cin >> v[i];
    }

    cout << "Ce valoare cautam? ";
    cin >> val;

    i=1;

    while(i<=n && v[i] < val){
        i=i+1;
    }

    if(i<=n)
        if(v[i]= val) cout << "Valorea se afla pe pozitia " << i;
        else cout << "Valorea nu exista in tablou.";
        else cout << "Valoarea nu se afla in tablou.";
}
