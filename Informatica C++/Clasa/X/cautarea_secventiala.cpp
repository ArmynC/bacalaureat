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

    while(i<=n && v[i] != val){
        i=i+1;
    }

    if(i<=n){
        cout << "Valorea " << val << " a fost gasita pe pozitia " << i;
    }
    else cout << "Valorea " << val << " nu exista in tablou.";
}
