#include <iostream>
#include <fstream>

using namespace std;

int a[100][100], n, m;

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

int main()
{
    int i, j;

    ifstream f("graf.in");
    ofstream g("graf.out");

    f >> n >> m;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            f >> a[i][j];
        }
    }

    f.close();

    if(adiacenta(n,m,a)==1)
    {
        g << "DA";
    }
    else
    {
        g << "NU";
    }

    g.close();

    return 0;
}
