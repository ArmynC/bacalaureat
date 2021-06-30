#include <iostream>

using namespace std;

int main()
{
    int n, cif, s=0, p=1, poz=0, copie_n;
    cin >> n;
    copie_n = n;

    while(copie_n!=0){
        poz++;
        copie_n=copie_n/10;
    }

    while(n!=0){
        cif=n%10;
        /// Cifra cif se afla exact in pozitia poz.
        if(poz%2==0){
            s = s+cif;
            p = p*cif;
        }
        n=n/10;
        poz--;
    }
    cout << s << " " << p;
    return 0;
}
