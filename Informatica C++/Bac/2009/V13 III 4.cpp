#include <fstream>

using namespace std;

int p(int n, int c)
{
    /// Algoritm de eliminare din numarul n a cifrei c.
    int m, p, cif, cn;

    m = 0;
    p = 1;
    cn = n;

    while(n>0)
    {
        cif = n%10;

        if(cif==c) ;
        else
        {
            m += cif*p;
            p *= 10;
        }

        n /= 10;
    }

    n = cn;

    return m;
}

int main()
{
    int n, c;

    ifstream f("bac.in");
    ofstream g("bac.out");

    while(f>>n)  /// Cat timp se poate citi un element din fisier si l-am si citit.
    {
        if(n==0) ;
        else
        {
            for(c=1; c<=9; c=c+2)
            {
                n=p(n,c);
            }

            if(n==0) ;
            else
            {
                g << n << " ";
            }
        }
    }

    f.close();
    g.close();

    return 0;
}
