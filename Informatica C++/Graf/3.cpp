#include <fstream>

using namespace std;

int n1, m1, a[100][100], n2, m2, b[100][100], n, p;

int adiacenta(int n, int m, int a[100][100])
{
    /* Functie care verifica daca o matrice A cu n linii si m coloane
    este matrice de adiacenta pentru un graf neorientat cu n varfuri */

    int i, j, ok;

    if(n!=m)
    {
        ok = 0;
    }
    else
    {
        ok = 1;

        for(i=1; i<=n && ok==1; i++)
        {
            if(a[i][i]!=0)
            {
                ok = 0;
            }
        }

        if(ok==1)
        {
            for(i=1; i<=n && ok==1; i++)
            {
                for(j=1; j<=n && ok==1; j++)
                {
                    if(a[i][j]!=0 && a[i][j]!=1)
                    {
                        ok = 0;
                    }
                }
            }
        }

        if(ok==1)
        {
            for(i=1; i<=n && ok==1; i++)
            {
                for(j=1; j<=n && ok==1; j++)
                {
                    if(a[i][j]!=a[j][i])
                    {
                        ok = 0;
                    }
                }
            }
        }
    }

    return ok;
}

int graf_partial(int n, int p, int a[100][100], int b[100][100])
{
    /* Functie care verifica daca graful G1 reprezentat prin matricea de adiacenta
    B este graf partial al grafului G reprezentat prin matricea de adiacenta A. */

    int i, j, ok;

    ok = 1;

    if(p!=n)
    {
        ok = 0;
    }
    else
    {
        for(i=1; i<=n && ok==1; i++)
        {
            for(j=1; j<=n && ok==1; j++)
            {
                if(b[i][j]>a[i][j])
                {
                    ok = 0;
                }
            }
        }
    }

    return ok;
}

int main()
}
    int i, j;

    ifstream f("graf.in");
    ofstream g("graf.out");

    f >> n1 >> m1;

    for(i=1; i<=n1; i++)
    {
        for(j=1; j<=m1; j++)
        {
            f >> a[i][j];
        }
    }

    f >> n2 >> m2;

    for(i=1; i<=n2; i++)
    {
        for(j=1; j<=m2; j++)
        {
            f >> b[i][j];
        }
    }

    f.close();

    if(adiacenta(n1,m1,a)==1 && adiacenta(n2,m2,b)==1)  /// Ambele sunt matrice de adiacenta.
    {
        n = n1;
        p = n2;

        if(graf_partial(n,p,a,b)==1)
        {
            g << "Este graf partial.";
        }
        else
        {
            g << "Nu este graf partial.";
        }
    }
    else
    {
        g << "Matricele nu sunt de adiacenta.";
    }

    g.close();

    return 0;
}
