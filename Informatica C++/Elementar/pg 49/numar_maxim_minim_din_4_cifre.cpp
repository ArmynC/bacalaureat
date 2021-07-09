#include <iostream>
using namespace std;

int main()
{
    int n, m, s, z, u, x, ogl, maxim, cif;

    cin >> n;

    m = n/1000;
    s = (n/100)%10;
    z = (n/10)%10;
    u = n%10;

    if(m<s){
        x = m;
        m = s;
        s = x;
    }

    if(s<z){
        x = s;
        s = z;
        z = x;
    }

    if(z<u){
        x = z;
        z = u;
        u = x;
    }

    if(m<s){
        x = m;
        m = s;
        s = x;
    }

    if(s<z){
        x = s;
        s = z;
        z = x;
    }

    if(m<s){
        x = m;
        m = s;
        s = x;
    }

    n = m*1000+s*100+z*10+u;

    maxim = n;

    ogl = 0;

    while(n!=0){
        cif = n%10;
        ogl = ogl*10+cif;
        n=n/10;
    }

    cout << "Numarul maxim: " << maxim << endl;
    cout << "Numarul minim: " << ogl;
}
