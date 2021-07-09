#include <iostream>
using namespace std;

main(){
    int i, n, p, gasit, m, u, val, v[100];

    cout << "Numarul de elemente din vector este (N): ";
    cin >> n;

    cout << "Dati valoarea cautata: ";
    cin >> val;

    cout << "Dati elementele vectorului: " << endl;

    for(i=1; i<=n; i++){
        cout << "v[" << i << "]=";
        cin >> v[i];
    }

    if((val>=v[1]) && (val<=v[n])){
        p=1;
        u=n;
        gasit=0;
        do{
            m=(p+u)/2;
            if(val==v[m]){
                gasit=1;
            }
            else{
                if(val>v[m]){
                p=m+1;
                }
            else u=m-1;
            }
        } while((gasit==1) || (p<u));
        if(gasit=0)
            cout << "Valoare inexistenta.";
            else cout << "Valoarea a fost gasita pe pozitia " << p;
    }
        else cout << "Valoarea inxistenta.";
}
