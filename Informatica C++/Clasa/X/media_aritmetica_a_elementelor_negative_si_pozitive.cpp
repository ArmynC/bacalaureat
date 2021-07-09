#include <iostream>
using namespace std;

int main(){
    float nr, np=0, nn=0, maneg, mapoz, sp=0, sn=0;
    cout << "Dati nr.:"; cin >> nr;
    while(nr!=0)
    {
        if(nr>=0)
        {
            np=np+1;
            sp=sp+nr;
        }
        else
        {
            nn=nn+1;
            sn=sn+nr;
        }
        cout << "Dati nr.:"; cin >> nr;
    }
    mapoz=sp/np;
    maneg=sn/nn;
    cout << "Media aritmetica a numerelor negative este:" << maneg << endl;
    cout << "Media aritmetica a numerelor pozitive este:" << mapoz;
}
