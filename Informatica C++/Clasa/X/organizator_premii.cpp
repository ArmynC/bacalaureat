#include <iostream>
using namespace std;

main(){
    int i, n, nr, v[100];

    cout << "Dati numarul de bilete castigatoare (N): ";
    cin >> n;

    cout << "Dati numarul de participanti: " << endl;

    for(i=1; i<=n; i++){
        cout << "v[" << i << "]=";
        cin >> v[i];
    }

    cout << "Ce numar este declarat castigator? ";
    cin >> nr;

    i=1;

    while(i<=n && v[i] != nr){
        i=i+1;
    }


    if(i<=n){
        cout << "Castigatorul are numarul: " << i;
    }
    else cout << "Nu exista castigator.";
}
