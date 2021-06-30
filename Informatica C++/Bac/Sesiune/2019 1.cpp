#include <iostream>

using namespace std;

void impare(int &n)
{
    int cif, nr, ogl, nrz, nx;

    nr = 0;
    nrz = 0;
    nx = n;

    while(nx%10==0)
    {
        nx = nx/10;
        nrz++;
    }

    n = nx;

    while(n>0)
    {
        cif = n%10;

        if(cif%2!=0)
        {
            cif--;
        }

        nr = nr * 10 + cif;

        n = n/10;
    }

    n = nr;

    ogl = 0;

    while(n>0)
    {
        ogl = ogl * 10 + n%10;
        n = n/10;
    }

    n = ogl;

    for(int i=1; i<=nrz; i++)
    {
        n = n*10;
    }
}

int main()
{
    int n;

    cin >> n;

    impare(n);

    cout << n;

    return 0;
}
