#include <iostream>

using namespace std;

void cifre(int nr, int &nc, int &sc)
{
    int cifra;

    nc = 0;
    sc = 0;

    while(nr!=0)
    {
        cifra = nr%10;

        {
            sc += cifra;
        }

        nr /= 10;

        nc++;
    }
}

int main()
{
    int n, nc, sc, cif, ok=0;

    cin >> n;

    cifre(n,nc,sc);

    if(!(nc<=sc && sc<=9*nc))
    {
        cout << "NU";
    }
    else if(sc%nc!=0)
    {
        cout << "NU";
    }
    else
    {
        cif = sc/nc;

        while(n>0)
        {
            if(n%10==cif)
            {
                ok = 1;
            }

            n /= 10;
        }

        if(ok==0)
        {
            cout << "NU";
        }
        else
        {
            cout << "DA";
        }
    }

    return 0;
}
