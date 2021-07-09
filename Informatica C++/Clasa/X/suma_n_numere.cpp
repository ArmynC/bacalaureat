// Se se calculeze suma a n numere reale citite de la tastatura
#include <iostream>
using namespace std;

main(){
    float a, s, n, i;

    cout<<"n=";
    cin>>n;
    s=0;
    for(i=1;i<=n;i++)
    {
        cout<<"a=";
        cin>>a;
        s=s+a;
    }
    cout<<"Suma este:"<<s;
}
