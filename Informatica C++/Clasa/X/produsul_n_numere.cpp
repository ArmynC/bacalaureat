// Se se calculeze suma a n numere reale citite de la tastatura
#include <iostream>
using namespace std;

main(){
    float a, p, n, i;

    cout<<"n=";
    cin>>n;
    p=1;
    for(i=1;i<=n;i++)
    {
        cout<<"a=";
        cin>>a;
        p=p*a;
    }
    cout<<"Produsul este:"<<p;
}
